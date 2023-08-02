//using bottom up approach
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int lastrow=triangle.size();
        int dp[lastrow];
        
        for(int i=0;i<lastrow;i++)
        {
            dp[i]=triangle[lastrow-1][i];
        }    
        
        for(int i=lastrow-2;i>=0;i--)
        {
            for(int j=0;j<=i;j++)
            {
                dp[j]=triangle[i][j]+min(dp[j],dp[j+1]);
            }
        }
        return dp[0];

    }
};
