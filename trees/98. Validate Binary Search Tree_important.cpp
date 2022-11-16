question= to check that the given tree is valid or not
class Solution {
public:
    
         bool valid(TreeNode* root,long low, long high)
         {
          if(root==NULL)
                  return true;
          if(low>=root->val ||  high<=root->val)
                  return false;
                  
           return valid(root->left,low,root->val)             
          && valid(root->right,root->val,high);      
         }
        
    bool isValidBST(TreeNode* root) {
        return valid(root,LONG_MIN,LONG_MAX);
            
    }
};
