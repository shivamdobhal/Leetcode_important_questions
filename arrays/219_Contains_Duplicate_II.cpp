Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
Example 1:

Input: nums = [1,2,3,1], k = 3
Output: true
Example 2:

Input: nums = [1,0,1,1], k = 1
Output: true
Example 3:

Input: nums = [1,2,3,1,2,3], k = 2
Output: false
  
  code=
  //brute force code with time complexity=0(n*n)
  class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
            for(int i=0;i<nums.size()-1;i++)
            {
              for(int j=i+1;j<nums.size();j++)
            {
                    if(nums[i]==nums[j] && abs(i-j)<=k)
                            return true;
            }       
            }
            return false;
    }
};


//optimised code using hashmap
  bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
            unordered_map<int,int> map;
            for(int i=0;i<nums.size();i++)
            {
             if(map.count(nums[i])>0 && abs(map[nums[i]]-i)<=k)    //checking count is >0 or not 
                    {
                            return true;
                    }
                                         
                map[nums[i]]=i;  //if element not present then insert it
                    
            }
            return false;
    }
