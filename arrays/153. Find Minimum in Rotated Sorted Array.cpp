class Solution {
public:
    int findMin(vector<int>& nums) {
       int res=INT_MAX;
       int l=0;
        int r=nums.size()-1;
        
        while(l<=r)
        {
            int mid=(l+r)/2;
            
            if(nums[l]<=nums[mid])
            {
               res=min(res,nums[l]);
                l=mid+1;
            }
            
           else if(nums[r]>=nums[mid])
            {
                res=min(res,nums[mid]);
                r=mid-1;
            }
        }
        return res;
    }
};
