//based on flood fill algorithm
//solved using DFS
class Solution {
public:
        
        void dfs(int startrow,int startcol,vector<vector<int>> &grid,int &ans,int row[],int col[])
        {
                if(grid[startrow][startcol]==-1)
                        return;
                
                grid[startrow][startcol]=-1;
                
            for(int i=0;i<4;i++)
            {
                    int nrow=startrow+row[i];
                    int ncol=startcol+col[i];
                
                    if(nrow<0 || ncol<0 ||nrow>grid.size()-1|| ncol>grid[0].size()-1 || grid[nrow][ncol]==0)
                    {
                            ans++;
                            
                    }
                    
                  if(nrow>=0 && nrow<grid.size() && ncol>=0 && ncol<grid[0].size() && grid[nrow][ncol]==1 )
                          dfs(nrow,ncol,grid,ans,row,col);
            }
        }
        
        
    int islandPerimeter(vector<vector<int>>& grid) {
        int startrow,startcol;
        bool flag =false;    
        for(int i=0;i<grid.size();i++)
        {
                for(int j=0;j<grid[0].size();j++)
                {
                        if(grid[i][j]==1)
                        {       
                                flag=true;
                                startrow=i;
                                startcol=j;
                                break;
                        }
                }
                if(flag==true)
                        break;
                
        }
     int ans=0;
     int row[]={-1,0,1,0};
     int col[]={0,1,0,-1};       
           dfs(startrow,startcol,grid,ans,row,col);
            return ans;
            
    }
};
