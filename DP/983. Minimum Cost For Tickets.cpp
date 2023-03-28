class Solution {
public:
        
      int helper(vector<int>& days, vector<int>& costs,int index,vector<int> &dp)
      {
              int n=days.size();
              if(index>=days.size())
              {
                    return 0;  
              }
              if(dp[index]!=-1)
              {
                      return dp[index];
              }
              
             int option1 = costs[0] + helper(days, costs, index + 1, dp);
    

    int i;
    for(i = index; i < n && days[i] < days[index] + 7; i++);
    int option2 = costs[1] + helper(days, costs, i, dp);
        
    for(i = index; i < n && days[i] < days[index] + 30; i++);
    int option3 = costs[2] + helper(days, costs, i, dp);
        
              dp[index]= min(option1,min(option2,option3)) ;      
              return dp[index];
              
              
      }
        
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int ans;
            vector<int> dp(days.size()+1,-1);
        ans=helper(days,costs,0,dp);
            return ans;
    }
};
