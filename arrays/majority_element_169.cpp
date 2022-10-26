169---
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:
Input: nums = [3,2,3]
Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2

solution-----         tc=0(n)  sc=o(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
     sort(nums.begin(),nums.end());                                        //first step sort array
            int count=1,temp=1;int x=nums[0];                            
            for(int i=0;i<nums.size()-1;i++)
            {                 
                    if(nums[i]==nums[i+1])                               // second step compare
                    {
                      count++;
                           if(count>temp)                                //for maintaining count value  
                           {
                               temp=count;
                               x=nums[i];
                           }                            
                    }
                    else                                               //when diff element occur then set count=1
                    {  
                         count=1;
                    }
                    
            }   
            return x;
            
    }   
};
