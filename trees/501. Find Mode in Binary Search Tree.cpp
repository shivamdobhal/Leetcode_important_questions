
class Solution {
public:
     void helper(TreeNode* root,vector<int> &v)
     {
         if(root==NULL)
             return ;
         
         helper(root->left,v);
         v.push_back(root->val);
         helper(root->right,v);
     }
         
    
    
    vector<int> findMode(TreeNode* root) {
        vector<int> v;
        helper(root,v);
     
        vector<int> res;
        unordered_map<int,int> map;
        
        //insert into map
        for(int i=0;i<v.size();i++)
        {
            map[v[i]]++;                 //key.....value
        }
        
        int maxi=-1;
        //finding the max freq;
        for(auto it:map)
        {
            maxi=max(maxi,it.second);
        }
        
        
        //finding element with max freq;
        for(auto it:map)
        {
            if(it.second==maxi)
            {
                res.push_back(it.first);
            }
        }
      
        return res;
        
    }
};
