Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]

............................................................................................................................................................
  loop_1-------------------------------res for left=[1,1,2,6]
  loop_2-------------------------------res for right=[1,4,12,24] and multiply left and right
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums);
            res[0]=1;
            
            //left part
            for(int i=1;i<nums.size();i++)
            {
                    res[i]=nums[i-1]*res[i-1];
            }
            
            //right part
            int right=1;
            for(int i=nums.size()-2;i>=0;i--)
            {
                    res[i]=nums[i+1]*res[i]*right;
                    right=right*nums[i+1];
            }
            return res;       
    }
};
