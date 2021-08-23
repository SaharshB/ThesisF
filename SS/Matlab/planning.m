function [new_path,path] = planning(graph,grd,algo,currp,dest)

nav_algo=algo;

c_loc=currp;
d_loc = dest;

y_w_limits=[-3.4, 1.7];
x_w_limits=[-1.05,4.75];
res=20;
pth=[];
c_pos=[round(((y_w_limits(2)-c_loc(2))*res)) round(((c_loc(1)-x_w_limits(1))*res))];
d_pos=[round(((y_w_limits(2)-d_loc(2))*res)) round(((d_loc(1)-x_w_limits(1))*res))];

c_p=(c_pos(1)-1)*117+c_pos(2);
d_p=(d_pos(1)-1)*117+d_pos(2);

if nav_algo == 1
    path = shortestpath(graph,c_p,d_p,'Method','unweighted'); %BFS
elseif nav_algo == 2
    path = shortestpath(graph,c_p,d_p,'Method','positive');   %Dijkstra
elseif nav_algo == 3
    pth = AStar(1,c_pos,d_pos,grd);
    path=flip(pth);
elseif nav_algo == 4
    pth = AStar(2,c_pos,d_pos,grd);
    path=flip(pth);
end

path1=path;
curp=path1(1);

new_path=curp;

for i=path1
    a = [(floor(curp/117)+1) mod(curp,117)];
    b = [(floor(i/117)+1) mod(i,117)];
    
    if (a(1) == b(1)) || (a(2) == b(2))
        
    else
        curp=path1(find(path1==i)-1);
        new_path=[new_path curp];
    end
end
new_path=[new_path path1(end)];
end

