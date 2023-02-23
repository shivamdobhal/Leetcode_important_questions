//iterative
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());    
        ans.push_back({});
        int prev=0;    
            for(int i=0;i<n;i++)
            {
                    int s=ans.size();
                    for(int j=0;j<s;j++)
                    {
                            if(i>0 && nums[i]==nums[i-1])
                            {
                                    while(j<prev) j++;
                            }
                            vector<int> v=ans[j];
                            v.push_back(nums[i]);                                        
                            ans.push_back(v);
                    }
                    prev=s;
            }
            return ans;
            
    }
};


.................................................................................................................................................................
  //recursive
  class Solution {
public:        
void backtrack(int index,vector<vector<int>>&ans,vector<int>&nums,vector<int> &v)
{
        ans.push_back(v);
        
        for(int i=index;i<nums.size();i++)
        {       if(i>index && nums[i]==nums[i-1]) continue;
                v.push_back(nums[i]);
                 backtrack(i+1,ans,nums,v);
                v.pop_back();
        }
}
        
     vector<vector<int>> subsetsWithDup(vector<int>& nums) { 
         sort(nums.begin(),nums.end()); 
             vector<vector<int>> ans;
        vector<int> v;
        backtrack(0,ans,nums,v);
            return ans;
    }
};
