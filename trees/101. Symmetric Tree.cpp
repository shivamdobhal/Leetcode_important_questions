class Solution {
public:
        
        bool result(TreeNode* root1,TreeNode* root2)
        {
        if(root1==NULL && root2==NULL) return true;
        if(root1==NULL || root2==NULL) return false;
        if(root1->val!=root2->val)     return false;        
        
        return result(root1->left,root2->right) &&   result(root1->right,root2->left);      
        }
        
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
                return true;
            
          return result(root->left,root->right);  
    }
};
