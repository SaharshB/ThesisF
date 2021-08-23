function [] = GoToDest(path,d_loc)

subscriber.loc=rossubscriber("/odom");
subscriber.scan=rossubscriber("/scan");
publisher.mov=rospublisher("/cmd_vel");
[path_pub, path_msg]=rospublisher("/path","std_msgs/Int32MultiArray");
path_msg.Data=path;
send(path_pub,path_msg);
yahaan=subscriber.loc.LatestMessage.Pose.Pose;
mov_msg=rosmessage(publisher.mov);
x_w_limits=[-1.05,4.75];
y_w_limits=[-3.4,1.7];
res=20;
y_coor=[round(yahaan.Position.X*100)/100 round(yahaan.Position.Y*100)/100];
y_c=[round(((y_w_limits(2)-y_coor(2))*res)) round(((y_coor(1)-x_w_limits(1))*res))];
res=20;
pos=1;
req_pos=1;
new_path=path(2:end);
i=new_path(2);
while (y_coor < 0.95*d_loc) | (y_coor > 1.05*d_loc)
    for i=new_path
        pause(1)
        scan=subscriber.scan.LatestMessage.Ranges;
        yahaan=subscriber.loc.LatestMessage.Pose.Pose;
        y_coor=[round(yahaan.Position.X*100)/100 round(yahaan.Position.Y*100)/100];
        y_c=[round(((y_w_limits(2)-y_coor(2))*res)) round(((y_coor(1)-x_w_limits(1))*res))];
        
        dest_coor=[(floor(i/117)+1) mod(i,117)];
        
        if dest_coor(1) > y_c(1)
            req_pos=3;
        elseif dest_coor(1) < y_c(1)
            req_pos=2;
        elseif dest_coor(2) > y_c(2)
            req_pos=1;
        elseif dest_coor(2) < y_c(2)
            req_pos=4;
        end
        theta=atan2(yahaan.Orientation.X*yahaan.Orientation.Y+yahaan.Orientation.W*yahaan.Orientation.Z,0.5-yahaan.Orientation.Y^2-yahaan.Orientation.Z^2)*180/pi;
        
        if theta>-1 && theta<1
            pos=1;
        elseif theta>89 && theta<91
            pos=2;
        elseif theta>-91 && theta<-89
            pos=3;
        elseif theta>179 && theta<180 && theta>-180 && theta<-179
            pos=4;
        end
        
        poses=[0 89 -91 179];
        if pos~=req_pos
            while round(theta) ~= poses(req_pos)
                mov_msg.Angular.Z=0.08;
                send(publisher.mov,mov_msg);
                yahaan=subscriber.loc.LatestMessage.Pose.Pose;
                theta=atan2(yahaan.Orientation.X*yahaan.Orientation.Y+yahaan.Orientation.W*yahaan.Orientation.Z,0.5-yahaan.Orientation.Y^2-yahaan.Orientation.Z^2)*180/pi;
            end
            mov_msg.Angular.Z=0.0;
            send(publisher.mov,mov_msg);
        end
        
        if y_c(1)~=dest_coor(1)
            temp_d = 1;
        elseif y_c(2)~=dest_coor(2)
            temp_d = 2;
        end
        
        while (y_c(temp_d)~=dest_coor(temp_d))
            yahaan=subscriber.loc.LatestMessage.Pose.Pose;
            scan=subscriber.scan.LatestMessage.Ranges;
            y_coor=[round(yahaan.Position.X*100)/100 round(yahaan.Position.Y*100)/100];
            y_c=[round(((y_w_limits(2)-y_coor(2))*res)) round(((y_coor(1)-x_w_limits(1))*res))];            
            while lidarstop(scan)==1
                scan=subscriber.scan.LatestMessage.Ranges;
                mov_msg.Linear.X=0.00;
                send(publisher.mov,mov_msg);
            end
            %%start movement
            if dest_coor(temp_d) ~= y_c(temp_d)
                mov_msg.Linear.X=0.05;
                send(publisher.mov,mov_msg);
            end
        end
        mov_msg.Linear.X=0.0;
        send(publisher.mov,mov_msg);
    end
end
mov_msg.Linear.X=0.0;
send(publisher.mov,mov_msg);
end

