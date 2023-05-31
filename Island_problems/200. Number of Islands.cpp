class Solution {
public:
        void dfs(int r,int c,vector<vector<char>>& grid,int row[],int col[])
        {
                if(grid[r][c]=='2')
                        return ;
                
                grid[r][c]='2';
                
                 for(int i=0;i<4;i++)
             {
                     int nrow=r+row[i];
                     int ncol=c+col[i];
                 if(ncol>=0 && nrow>=0 && ncol<grid[0].size() && nrow<grid.size() && grid[nrow][ncol]=='1')
                 {
                         
                         dfs(nrow,ncol,grid,row,col);
                 }
                     
             }
                
        }
        
        
    int numIslands(vector<vector<char>>& grid) {
        int count =0;
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        
            for(int i=0;i<grid.size();i++)
            {
                    for(int j=0;j<grid[0].size();j++)
                    {
                            if(grid[i][j]=='1')
                            {                                    
                                    dfs(i,j,grid,drow,dcol);
                                    count++;
                            }
                    }
            }
            return count;
            
    }
};
