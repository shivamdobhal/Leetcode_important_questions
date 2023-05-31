//using dfs
class Solution {
public:
        void dfs(int startrow,int startcol,vector<vector<int>>& grid,int row[],int col[],int &ans)
        {
                
                if(grid[startrow][startcol]==-1)
                        return ;
                
                
               
                grid[startrow][startcol]=-1;
                
             for(int i=0;i<4;i++)
             {
                     int nrow=startrow+row[i];
                     int ncol=startcol+col[i];
                 if(ncol>=0 && nrow>=0 && ncol<grid[0].size() && nrow<grid.size() && grid[nrow][ncol]==1)
                 {
                         ans++;
                         dfs(nrow,ncol,grid,row,col,ans);
                 }
                     
             }
        }
        
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int maxi=0;
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};    
            
        for(int i=0;i<grid.size();i++)
        {
                for(int j=0;j<grid[0].size();j++)
                {
                        if(grid[i][j]==1)
                        {        
                          int ans=1;      
                      dfs(i,j,grid,drow,dcol,ans);
                         maxi=max(maxi,ans);       
                        }
                }
        }
            
            return maxi;
    }
};
