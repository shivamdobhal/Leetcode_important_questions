brute force by recursion
class Solution {
public:
        
    int uniquePaths(int m, int n) {
        return recursion(m,n,0,0);
    }
            
     int recursion(int row,int col,int i,int j)
     {
             if(i>=row || j>=col)
                     return 0;
             if(i==(row-1) && j==(col-1))
                     return 1;            
          return recursion(row,col,i+1,j) + recursion(row,col,i,j+1);
             
     }        
    
};


 OPTIMISED DYNAMIC PROGRAMMING
 
 class Solution {
public:
        
    int uniquePaths(int m, int n) {
            vector < vector<int> > dp(m+1,vector<int>(n+1,-1));      //CREATE A 2D  VECTOR AND GIVE -1 TO ALL THE ELEMENTS
        return recursion(m,n,0,0,dp);
    }
            
     int recursion(int row,int col,int i,int j,vector<vector<int>> &dp)
     {
             if(i>=row || j>=col)                          //BASE CASE
                     return 0;
             if(i==(row-1) && j==(col-1))                  //BASE CASE
                     return 1;
            
             if(dp[i][j]!=-1)                                   //IF OVERLAPPING IN DP OCCURS
                     return dp[i][j];
             
             return dp[i][j]=recursion(row,col,i+1,j,dp) + recursion(row,col,i,j+1,dp);    //STORING THE VALUE IN DP
             
     } 
};

 
