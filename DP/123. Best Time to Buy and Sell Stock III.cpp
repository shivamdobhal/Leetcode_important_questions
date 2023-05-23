//hard
//love babbar
class Solution {
public:
       //if buy=0 not allowed to buy
       //if buy is 1 then buy is allowed 
    int helper(vector<int> &prices,int index,int buy,int limit,vector<vector<vector<int>>> &dp)
    {
            if(index==prices.size() || limit==2)
            {
                    return 0;
                    
            }
            
            if(dp[index][buy][limit]!=-1)
            {
                    return dp[index][buy][limit];
            }
            
          int maxi=0;  
            if(buy)
            {
         int take1=-prices[index]+helper(prices,index+1,0,limit,dp);
         int nottake1=0+helper(prices,index+1,1,limit,dp); 
         maxi=max(take1,nottake1);           
            }
            //limit only changes if buy + sell work together
            
            else
            {
        int take2=prices[index]+helper(prices,index+1,1,limit+1,dp);
         int nottake2=0+helper(prices,index+1,0,limit,dp);
         maxi=max(take2,nottake2); 
            }
            dp[index][buy][limit]=maxi;
            return dp[index][buy][limit];
    }
        
        
    int maxProfit(vector<int>& prices) {
       vector<vector<vector<int>>> dp(prices.size(),vector<vector<int>>(2,vector<int>(3,-1)));  //3d dp
            int index=0;
        int buy=1;
        int limit=0; //initially 
            //limit increases when buy+sell both done
        return helper(prices,index,buy,limit,dp);    
            
            
    }
};
