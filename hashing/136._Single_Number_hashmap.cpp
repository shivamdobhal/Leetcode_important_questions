Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:
Input: nums = [2,2,1]
Output: 1
  
Example 2:
Input: nums = [4,1,2,1,2]
Output: 4
  
Example 3:
Input: nums = [1]
Output: 1
  
  solution----tc=0(n) sc=o(1)
  class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x;
            unordered_map<int,int> map;               //create a map
              for(int i=0;i<nums.size();i++)
            {
                    map[nums[i]]++;
                    //stores counts
            }
             for(int i=0;i<nums.size();i++)
            {
                     if(map[nums[i]]==1)      // if count of the element is 1 then send it to x
                             x=nums[i];
            }
            return x;
    }
};
  
