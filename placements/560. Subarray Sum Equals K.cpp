Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:
Input: nums = [1,1,1], k = 2
Output: 2
  
Example 2:
Input: nums = [1,2,3], k = 3
Output: 2




//using hashmap 
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
            unordered_map<int,int> map;
            map.insert({0,1});
        int sum=0,count=0;
            
            for(int i=0;i<n;i++)
            {
                    sum=sum+nums[i];
                          
                    if(map.find(sum-k)!=map.end())
                         count=count+map[sum-k];
              
                        map[sum]++;
                                   
            }
            return count;
    }
};
