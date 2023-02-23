//iterative approach
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
         ans.push_back({});
           
            for(int i=0;i<nums.size();i++)
            {
                    int s=ans.size();
                    for(int j=0;j<s;j++)
                    {
                            vector<int> v=ans[j];
                            v.push_back(nums[i]);                               
                             ans.push_back(v);       
                    }
            }
            return ans;
    }
};


......................................................................................................................................................................
 //recursive approach
 class Solution {
public:
        
void backtrack(int index,vector<vector<int>>&ans,vector<int>&nums,vector<int> &v)
{
        ans.push_back(v);
        
        for(int i=index;i<nums.size();i++)
        {
                v.push_back(nums[i]);
                 backtrack(i+1,ans,nums,v);
                v.pop_back();
        }
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        backtrack(0,ans,nums,v);
            return ans;
    }
}; 
