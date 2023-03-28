method 1;
..........................
class Solution {
public:
    int tribonacci(int n) {
        long long a=0;
            long long b=1;
            long long c=1;

            long long res;
            for(int i=0;i<n;i++)
            {
                    res=a+b+c;
                    a=b;
                    b=c;
                    c=res;
            }
            return a;
    }
};

...............................................................................................................................
  method2                  DP memoization
  -------------------------
  class Solution {
public:
    int tribonacci(int n) {
       if(n==0) return 0;
       if(n==1 || n==2) return 1;    
            long long dp[n+1];
            dp[0]=0;
            dp[1]=1;
            dp[2]=1;
            
            for(int i=3;i<=n;i++)
            {
                    dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
            }
            return dp[n];
            
    }
};





---------------------------------------------------------
  method 3                 DP + recursion
  class Solution {
public:
        
        int helper(int n,vector<long long> &dp)
        {
        if(n==0) return 0;
       if(n==1 || n==2) return 1;
                
                if(dp[n]!=-1)
                {
                        return dp[n];
                }
                
                dp[n]=helper(n-1,dp)+helper(n-2,dp)+helper(n-3,dp);
                return dp[n];
                
        }
        
                
                
                
    int tribonacci(int n) {
       vector<long long> dp(n+1,-1);
            
            return helper(n,dp);
            
            
    }
};
