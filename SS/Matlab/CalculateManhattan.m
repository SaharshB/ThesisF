function [Heuristic]=CalculateManhattan(grd,goal)
Heuristic=zeros(size(grd));
for i=1:size(grd,1)
    for j=1:size(grd,2)
        Heuristic(i,j)=(i-goal(1))+(j-goal(2));
    end
end
end