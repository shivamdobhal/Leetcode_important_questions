Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.
Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]



==============================================================================================================================================
brute force timecomplexity=o(n*n*n*m)   <m is for unordered set>
==============================================================================================================================================
  class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
           set <vector<int>> set; 
            sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size()-2;i++)
            {
                   for(int j=i+1;j<nums.size()-1;j++)
            {
                      for(int k=j+1;k<nums.size();k++)
            {
                    
        if(nums[i]+nums[j]+nums[k] == 0 )
                              {
         set.insert({nums[i],nums[j],nums[k]});
                                  
                              }                    
            }
            }   
            }
         for(auto i:set) res.push_back(i);
            return res;
        }
             
};






optimised code using two pointer method time complexity=0(n)
============================================================================================================================
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
             vector<vector<int>> res;
            sort(nums.begin(),nums.end());
            int p1,p2;
            
            for(int i=0;i<nums.size()-2;i++)
            {
                   
                    if(nums[i]!=nums[i+1]){
                  //  if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                             p1=i+1;
                             p2=nums.size()-1;
                  while(p1<p2)
                  {       
                     if(-nums[i]>(nums[p1]+nums[p2]))
                    {
                            p1++;
                    }
                      
                  else if(-nums[i]<(nums[p1]+nums[p2]))
                    {
                            p2--;
                    }
                          
                   else if(-nums[i]==(nums[p1]+nums[p2]))
                    {
                           vector<int> temp;
                           temp.push_back(nums[i]);
                           temp.push_back(nums[p1]);
                           temp.push_back(nums[p2]);
                           res.push_back(temp);
                           while(p1<p2 && nums[p1]==nums[p1+1]) p1++;
                           while(p1<p2 && nums[p2]==nums[p2-1]) p2--;
                           p1++,p2--;
                    }
                  }
                    }  
            }
            return res;
            
    }
};
