///////////////////////////////////////////////////////////////memoization////////////////////////////////////////////////////////////////////////////////////////////////////
class Solution {
public:
    int numTrees(int n) {
        int dp[n+1];
        dp[0]=dp[1]=1;
        
        for(int  i=2;i<=n;i++)
        {
            int sum=0;
            for(int j=0;j<i;j++)
            {
                sum+=dp[j]*dp[i-j-1];
            }
            dp[i]=sum;
            
        }
        return dp[n];
    }
};




////////////////////////////////////////////////////////////////////////////////////by recursion//////////////////////////////////////////////////////////////////////////

class Solution {
public:
    
    void helper(int i,int j,int dp[],int sum)
    {
        if(j==i)
        {   
            
            dp[i]=sum;
            return;
        }
        sum+=dp[j]*dp[i-j-1];
        helper(i,j+1,dp,sum);
        
    }
        
    int numTrees(int n) {
        int dp[n+1];
        dp[0]=dp[1]=1;
        
        for(int i=2;i<=n;i++)
        {
            helper(i,0,dp,0);
        }
        
        return dp[n];
    }
};
