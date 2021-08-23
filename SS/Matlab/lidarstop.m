function [stop] = lidarstop(scan_array)
stop=0;
arr=[1:20,340:360];
for i = arr
    if scan_array(i)>0 && scan_array(i)<0.5
        stop=1;
        break;
    end
end
end