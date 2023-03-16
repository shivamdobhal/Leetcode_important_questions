class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
            int maxi=1;
            vector<int> dp(n,1);
            
            
            for(int i=1;i<nums.size();i++)
            {
                    for(int j=i-1;j>=0;j--)
                    {
                            if(nums[i]>nums[j])
                            {
                                dp[i]=max(dp[i],dp[j]+1);
                                 maxi=max(dp[i],maxi);  
                                 
                            }
                    }
            }
            return maxi;
            
            
    }
};
