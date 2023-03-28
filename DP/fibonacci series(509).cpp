 method-1 >>>>> iterative
 ............................................................................................................
class Solution {
public:
    int fib(int n) {
        int a=0;
            int b=1;
        int index=0;
            int ans;
            while(index<n)
            {
                    ans=a+b;
                    a=b;
                    b=ans;
                    index++;
            }
            return a;
    }
};







method 2..................... DP memoization
....................................................................................................................
class Solution {
public:
    int fib(int n) {
            if(n==0) return 0;
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        
          for(int i=2;i<=n;i++)
          {
                  dp[i]=dp[i-1]+dp[i-2];
          }
            return dp[n];
    }
};




















method 3.....................   only recursion
....................................................................................................................
class Solution {
public:
        int helper(int n)
        {
                if(n==0) return 0;
                if(n==1) return 1;
                
                return helper(n-1)+helper(n-2);
                
        }
        
        
    int fib(int n) {
        //vector<int> dp(n+1,-1);
        return helper(n);    
    }
};



























method 4.....................DP + recursion
class Solution {
public:
        int helper(int n,vector<int> &dp)
        {
                if(n==0) return 0;
                if(n==1) return 1;
                
                if(dp[n]!=-1)
                        return dp[n];
                
                dp[n]=helper(n-1,dp)+helper(n-2,dp);
                return dp[n];
                
                
        }
        
        
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return helper(n,dp);    
    }
};
....................................................................................................................
