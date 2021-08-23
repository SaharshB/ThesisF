import socket
import sys

HOST = '127.0.0.1'  # Standard loopback interface address (localhost)

def get_data(port):
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.bind((HOST, port))
        s.listen()
        conn, addr = s.accept()
        with conn:
            data = conn.recv(1024)
            return data[0]

if __name__ == '__main__':
    prt = float(sys.argv[1])
    x=str(get_data(int(prt)))
    sys.stdout.write(x)