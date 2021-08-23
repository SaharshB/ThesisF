function [] = rhapsodyInterface(grph,grd)

curr=rossubscriber("/odom");
magn=rossubscriber("/magnetic_vals");
[path_pub, path_msg]=rospublisher("/path","std_msgs/Int32MultiArray");
[mov_pub, mov_msg]=rospublisher("/cmd_vel");

dest_x=[-0.04, 1.87, -0.54, 1.26, 2.1, 2.52, 0.52, 1.87, 2.54, 1.87];
dest_y=[0.84, -1.82, 0.94, 0.97, 1.35, 0.89, -1.977, -1.82, -1.023, -1.97];
path=[];

g=grph;
A=grd;

while 1    
    dest=str2double(python('serv.py','52060'))-48;
    goto=str2double(python('serv.py','52068'))-48;
    movd=str2double(python('serv.py','52059'))-48;
    p_algo=str2double(python('serv.py','52056'))-48;
    sped=str2double(python('serv.py','52058'))-48;
    stbt=str2double(python('serv.py','52066'))-48;
    locz=[curr.LatestMessage.Pose.Pose.Position.X, curr.LatestMessage.Pose.Pose.Position.Y];
    if dest
        sprintf("Destination is %d", dest)
    end
    if p_algo
        sprintf("p_algo is %d", p_algo)
    end
    if goto
        sprintf("Go to dest is %d", goto)
    end
    if movd
        sprintf("Move Direction is %d", movd)
    end
    if sped
        sped=0.26*sped/5;
        sprintf("Speed is %d", sped)
    end
    if stbt
        sprintf("State of bot is %d", stbt)
    end
    
    if dest & p_algo
        destn=[dest_x(dest), dest_y(dest)];
        path=planning(g,A,p_algo,locz,destn);
        path_msg.Data=path;
        send(path_pub,path_msg);
    end
    
    if goto == 1
        GoToDest(path,destn);
        disp("Going to dest");
    end
    
    if stbt == 1
        if sped
            if movd == 1
                mov_msg.Linear.X=sped;
                send(mov_pub,mov_msg);
                disp("Move fwd");
            elseif movd == 4
                mov_msg.Linear.X=-sped;
                send(mov_pub,mov_msg);
                disp("Move bck");
            end
        else
            mov_msg.Linear.X=0;
            send(mov_pub,mov_msg);
            disp("No speed");
        end
        if movd == 2
            mov_msg.Angular.Z=0.1;
            send(mov_pub,mov_msg);
            disp("Rotate left");
        elseif movd == 3
            mov_msg.Angular.Z=-0.1;
            send(mov_pub,mov_msg);
            disp("Rotate right");
        end
        
    else
        mov_msg.Linear.X=0;
        mov_msg.Angular.Z=0;
        send(mov_pub,mov_msg);
        disp("Stop");
    end
    
    if getmag == 1
        disp("Magnetic Field Values: X: %f Y: Z: ",magn.LatestMessage.MagneticField_.X,magn.LatestMessage.MagneticField_.Y,magn.LatestMessage.MagneticField_.Z)
    end
    
    pause(0.5);
end

end

