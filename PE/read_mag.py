import rospy
from std_msgs.msg import String
from sensor_msgs.msg import MagneticField
from rm3100read import read_rm3100
import smbus, struct
from math import atan2, pi

def recast24to32(byte0,byte1,byte2):
    # pack 24 bits (3 bytes) into 32 bits byte-type
    b24 = struct.pack('xBBB',byte0,byte1,byte2)

    # unpack to unsigned long integer
    uL = struct.unpack('>L',b24)[0]

    # this is for 2's complement signed numbers - 
    #   if negative assign sign bits for 32 bit case
    if (uL & 0x00800000):
        uL = uL | 0xFF000000

    # repack as 32 bit unsigned long byte-type
    packed = struct.pack('>L', uL)
    # unpack as 32 bit signed long integer
    unpacked = struct.unpack('>l', packed)[0]

    return unpacked

def read_rm3100():
    bus = smbus.SMBus(1)
    address = 0x20
    rm3100_POLL   = 0x00
    rm3100_CMM    = 0x01

    rm3100_Mx2w   = 0x24

    bus.write_byte_data(address, rm3100_POLL , 0x00)

    bus.write_byte_data(address, rm3100_CMM , 0b01111001)
    
    x=[]
    y=[]
    z=[]
    
    x_coeff=[-14.45, 2219.57]
    y_coeff=[-14.20, 7147.13]
    z_coeff=[14.02,-20454.22]
    
    for j in range(100):
        raw=bus.read_i2c_block_data(address, rm3100_Mx2w, 9)
        values=[]
        for i in range(0, 9, 3):
            data = float(recast24to32(raw[i],raw[i+1],raw[i+2]))
            values.append(data)
        x.append(values[0])
        y.append(values[1])
        z.append(values[2])
    x_sum=0
    y_sum=0
    z_sum=0

    for i in range(100):
        x_sum=x_sum+x[i]
        y_sum=y_sum+y[i]
        z_sum=z_sum+z[i]
    x_sum=x_sum/100
    y_sum=y_sum/100
    z_sum=z_sum/100
    
    values=[(x_sum*x_coeff[0] + x_coeff[1]), (y_sum*y_coeff[0] + y_coeff[1]), 
    (z_sum*z_coeff[0] + z_coeff[1])]
    
    return values

def mag_vals():
    mag_msg=MagneticField()
    pub = rospy.Publisher('magnetic_vals', MagneticField, queue_size=10)
    rospy.init_node('mag_vals', anonymous=True)
    rate = rospy.Rate(200) # 10hz
    while not rospy.is_shutdown():
        values=read_rm3100()
        mag_msg.magnetic_field.x=values[0]*(10**-9)
        mag_msg.magnetic_field.y=values[1]*(10**-9)
        mag_msg.magnetic_field.z=values[2]*(10**-9)
        heading=atan2(values[0],values[1])*180/pi
        pub.publish(mag_msg)
        rate.sleep()

if __name__ == '__main__':
    try:
        mag_vals()
    except rospy.ROSInterruptException:
        pass