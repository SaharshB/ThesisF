function [path] = AStar(heur,start, dest, Grid)
% clc; clear all; 
% clear classes;
cost=1;
Found=false;
Resign=false;
grid=Grid;
init=start;
goal=dest;
path=[];
if heur ==1
    Heuristic=CalculateEuclidian(grid,goal); %Calculate the Heuristic   
elseif heur ==2
    Heuristic=CalculateManhattan(grid,goal); %Calculate the Heuristic   
end
 
ExpansionGrid(1:size(grid,1),1:size(grid,2)) = -1; % to show the path of expansion
ActionTaken=zeros(size(grid)); %Matrix to store the action taken to reach that particular cell
%how to move in the grid
delta = [-1,  0; % go up
          0, -1; % go left
          1,  0; %go down
          0,  1]; % go right
 
 
for i=1:size(grid,1)
    for j=1:size(grid,2)
        gridCell=search();
        if(grid(i,j)>5)
           gridCell=gridCell.Set(i,j,1,Heuristic(i,j));
        else
            gridCell=gridCell.Set(i,j,0,Heuristic(i,j));
        end
        GRID(i,j)=gridCell;
        clear gridCell;
    end
end
Start=search();
Start=Start.Set(init(1),init(2),grid(init(1),init(2)),Heuristic(init(1),init(2)));
Start.isChecked=1;
GRID(Start.currX,Start.currY).isChecked=1;
Goal=search();
Goal=Goal.Set(goal(1),goal(2),grid(goal(1),goal(2)),0);
 
OpenList=[Start];
ExpansionGrid(Start.currX,Start.currY)=0;
small=Start.gValue+Start.hValue;
count=0;
while(Found==false || Resign==false) 
    small=OpenList(1).gValue+OpenList(1).hValue+cost;
    for i=1:size(OpenList,2)
        fValue=OpenList(i).gValue+OpenList(i).hValue;
        if(fValue<=small)
            small=fValue;
            ExpandNode=OpenList(i);
            OpenListIndex=i;
        end
    end
    OpenList(OpenListIndex)=[];
    ExpansionGrid(ExpandNode.currX,ExpandNode.currY)=count;
    count=count+1;
    
    for i=1:size(delta,1)
        direction=delta(i,:);
        if(ExpandNode.currX+ direction(1)<1 || ExpandNode.currX+direction(1)>size(grid,1)|| ExpandNode.currY+ direction(2)<1 || ExpandNode.currY+direction(2)>size(grid,2))
            continue;
        else
            NewCell=GRID(ExpandNode.currX+direction(1),ExpandNode.currY+direction(2));
            
            if(NewCell.isChecked~=1 && NewCell.isEmpty~=1)
                GRID(NewCell.currX,NewCell.currY).gValue=GRID(ExpandNode.currX,ExpandNode.currY).gValue+cost;
                GRID(NewCell.currX,NewCell.currY).isChecked=1; %modified line from the v1
                OpenList=[OpenList,GRID(NewCell.currX,NewCell.currY)]; 
                ActionTaken(NewCell.currX,NewCell.currY)=i;
            end
            
            if(NewCell.currX==Goal.currX && NewCell.currY==Goal.currY && NewCell.isEmpty~=1)
                Found=true;
                Resign=true;
                disp('Search Successful');
                GRID(NewCell.currX,NewCell.currY).isChecked=1;
                ExpansionGrid(NewCell.currX,NewCell.currY)=count;
                GRID(NewCell.currX,NewCell.currY)
                break;
            end 
        end
    end
    if(isempty(OpenList) && Found==false)
        return;
    end
end

X=goal(1);Y=goal(2);
 
while(X~=init(1)|| Y~=init(2))
    x2=X-delta(ActionTaken(X,Y),1);
    y2=Y-delta(ActionTaken(X,Y),2);
    path(end+1)=(x2-1)*size(grid,2)+y2;
    X=x2;
    Y=y2;
end
 
end

