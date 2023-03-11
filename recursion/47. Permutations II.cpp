class Solution {
public:
        
        void helper(vector<int>& nums,set<vector<int>> &set,vector<int> v,int arr[])
        { 
             if(v.size()==nums.size())
             {
                     set.insert(v);
                     return ;
             }
                
                for(int i=0;i<nums.size();i++)
                {
                    if(arr[i]!=1)      //if unvisited
                    {
                            arr[i]=1;
                            v.push_back(nums[i]);
                            helper(nums,set,v,arr);
                            arr[i]=0;
                            v.pop_back();          
                    }
                }
                
        }
        
    vector<vector<int>> permuteUnique(vector<int>& nums) {
            vector<vector<int>> ans;
            vector<int> v;
         int arr[nums.size()];
            for(int i=0;i< nums.size();i++)
                    arr[i]=0;
            
            set<vector<int>> set;          // for finding unique elements
            
            helper(nums,set,v,arr);
            
            for(auto it : set)
            {
                    ans.push_back(it);
            }
            
            return ans;
            
            
    }
};
