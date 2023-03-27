class Solution {
public:

int rob(vector<int>& nums) {
    int n=nums.size();
        if(n==1) return nums[0];                                          //edge case
        if(n==2) return max(nums[0],nums[1]);                   //edge case
    int dp1[n-1];                                               //stores the result from 0 index to last-1 element
    int dp2[n-1];                                               //stores the result from 1 index to last element
    dp1[0]=nums[0];
    dp1[1]=max(nums[0],nums[1]);
        
    for(int i=2;i<n-1;i++)
    {
            dp1[i]=max(dp1[i-1],nums[i]+dp1[i-2]);     //filling dp1 array 
    }
        
        
        //for dp2
        
        dp2[0]=nums[1];
    dp2[1]=max(nums[2],nums[1]);
        
        for(int i=3;i<n;i++)
    {
            dp2[i-1]=max(nums[i]+dp2[i-3],dp2[i-2]);
    }
        
        int ans=max(dp1[n-2],dp2[n-2]);             // return the max from both the arrays
        return ans;
}
};
