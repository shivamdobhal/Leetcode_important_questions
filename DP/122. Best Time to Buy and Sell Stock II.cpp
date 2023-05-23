class Solution {              //striver + love babbar
public:
        
    int helper(vector<int>& prices,int index,int buy,vector<vector<int>> &dp)
    {
            int maxi=0;
            if(index==prices.size())
            {
                    return 0;
            }
            
            if(dp[index][buy]!=-1)
            {
                    return dp[index][buy];
            }
            
            
            if(buy)     
            {
                    //take //buy
       int take1=-prices[index]+helper(prices,index+1,0,dp);
       //nottake      //not buy
                    int nottake1=0+helper(prices,index+1,1,dp);                  
                    maxi=max(take1,nottake1);
            }
            else            //selling case
            {
                    //take   //sell
       int take2=prices[index]+helper(prices,index+1,1,dp);
       //nottake  //not sell
                    int nottake2=0+helper(prices,index+1,0,dp); 
                   
                    maxi=max(take2,nottake2);
            }
            dp[index][buy]=maxi;
            return maxi;
    }
        
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size(),vector<int> (2,-1));
        int index=0;
        int buy=1;    
        return helper(prices,index,buy,dp);
    }
};
