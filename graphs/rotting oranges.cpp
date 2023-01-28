class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
            int row=grid.size();
            int col=grid[0].size();            
            int time=-1; 
            queue <pair<int,int>> q;
            int total=0;      //total no of oranges i.e, fresh + rotten 
            int rotten=0;     //to rotten oranges     
            for(int i=0;i<row;i++)
            {
                    for(int j=0;j<col;j++)
                    {
                            if(grid[i][j]==2)
                              q.push({i,j});
                           if(grid[i][j]!=0)
                                   total++;
                    }
            }
          
           int dx[4] = {0,0,1,-1};      //for traversing in all 4 directions
           int dy[4] = {1,-1,0,0};
            
            while(!q.empty())
            {
                    int k=q.size();
                    rotten=rotten+k;
                    while(k--)
                    {
                            int x=q.front().first;
                            int y=q.front().second;
                              q.pop();
                             for(int i=0;i<4;i++)
                             {
                                int nx=x+dx[i];
                                int ny=y+dy[i];
                       
                                        if(ny>=0 && nx>=0 && nx<row && ny<col && grid[nx][ny]==1 )
                                        {
                                              grid[nx][ny]=2;
                                              q.push({nx,ny});
                                         }                              
                             }                          
                    }                 
                    time++;
            }
            
            if(total==0)        return 0;
            if (total==rotten) return time;
            else
                    return -1;
           
    }
};
