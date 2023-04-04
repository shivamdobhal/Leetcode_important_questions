class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
            for(auto it:nums)
            {
                    total+=it;
            }
            int sum2=0;
            for(int i=0;i<nums.size();i++)
            {
                    total=total-nums[i];
                    if(total==sum2)
                            return i;
                    
                    sum2=sum2+nums[i];
            }
            return -1;
    }
};
