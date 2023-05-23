//part 4 is same as part 3  
class Solution {
public:
        
        int helper(vector<int>& prices,int index,int buy ,int &k,int limit,vector<vector<vector<int>>>&dp)
        {
                if(index==prices.size())
                {
                        return 0;
                }
                
                if(k==limit)
                        return 0;
                
                
                if(dp[index][buy][limit]!=-1)
                {
                        return dp[index][buy][limit];
                }
                
                int maxi=0;
                
                
                if(buy)
                {
                        //take
        int take1=-prices[index]+helper(prices,index+1,0,k,limit,dp);
       //not take
        int nottake1=0+helper(prices,index+1,1,k,limit,dp);                        
        maxi=max(take1,nottake1);                
                 
                }
                
                else
         {
        //take              
                        //if sell then limit+1
        int take2=prices[index]+helper(prices,index+1,1,k,limit+1,dp);
       //not take
        int nottake2=0+helper(prices,index+1,0,k,limit,dp);                        
        maxi=max(take2,nottake2);                
                 
          }
          dp[index][buy][limit]=maxi;      
                return dp[index][buy][limit];
        }
        
    int maxProfit(int k, vector<int>& prices) {
       
            //use 3d dp as index,buy,limit are changes
            
vector<vector<vector<int>>> dp(prices.size(),vector<vector<int>>(2,vector<int>(k,-1)));
            
            
        int index=0;
        int buy=1;
        int limit=0;    
        return helper(prices,index,buy,k,limit,dp);    
    }
};
