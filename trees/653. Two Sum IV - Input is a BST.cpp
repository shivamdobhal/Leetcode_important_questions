brute force time complexity=o(n*n)                   //using two pointer approach
  =======================================
  class Solution {
public:
        vector<int> res;
        vector< int > inorder(TreeNode* root)
        {
                if(root==NULL)
                        return {};
                
                inorder(root->left);
                res.push_back(root->val);
                inorder(root->right);
                
                return res;
                
        }
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
            int l=0;
            int r=res.size()-1;
            
            while(l<r)
            {
                   if(res[l]+res[r]<k)
                       l++;
             
                   else if(res[l]+res[r]==k)                                      
                     return true;
                    else
                        r--;
            }
            return false;
    }
};










optimised solution using unordered set
===================================================================
class Solution {
public:
        unordered_set<int> set;
        bool inorder(TreeNode* root,int target)
        {
             if(root==NULL)
                     return false;
           
                if(set.find(target-root->val)!=set.end())
                        return true;
               set.insert(root->val);
              return inorder(root->left,target) || 
                      inorder(root->right,target);                
            
        }
    bool findTarget(TreeNode* root, int k) {
        return inorder(root,k);
    }
};
