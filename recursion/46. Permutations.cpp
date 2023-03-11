class Solution {
public:
        
        void helper(vector<int> nums,vector<vector<int>>  &ans,vector<int> v,int arr[])
        {
              if(v.size()==nums.size())
              {
                      ans.push_back(v);
                      return ;
              }
                
               for(int i=0;i<nums.size();i++)
               {
                     if(arr[i]!=1)   // if unvisited 
                     {
                       arr[i]=1;
                       v.push_back(nums[i]);                  //take
                       helper(nums,ans,v,arr);
                       arr[i]=0;                             //backtracking starts
                       v.pop_back();
               }
                       
               }
        }
        
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>  ans;
        vector<int> v;
        int arr[nums.size()];
        for(int i=0;i<nums.size();i++)
                arr[i]=0;    
        helper(nums,ans,v,arr);
            return ans;
    }
};
