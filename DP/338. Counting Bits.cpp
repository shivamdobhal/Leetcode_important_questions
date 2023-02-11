Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

Example 1:
Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
  
Example 2:
Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
---------------------------------------------------------------------------------------------------------------------------------------------------------------------
  we have to count the no. of ones by using tabulation method  of DP;
SOLUTION===============================================================================================================================================================

  class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
            ans[0]=0;
            if(n==0) return ans;
            ans[1]=1;            
            if(n==1) return ans;
            
            for(int i=2;i<=n;i++)
            {
                    if(i%2==0)
                    {
                            ans[i]=ans[i/2];
                    }
                    
                    else
                    {
                            ans[i]=ans[i/2]+1;
                    }
          }
     
            return ans;
    }
};
