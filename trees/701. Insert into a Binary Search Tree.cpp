insert the value at the correct position in BST
'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
class Solution {
public:
                  
     TreeNode* insert(TreeNode* root, int k)
         { 
                      if(root==NULL)
                              return new TreeNode(k);
                   else  if(k<root->val)
                     {
                             // if(root->left==NULL && k<root->val)
                             //         root->left=res;
                             // if(root->right==NULL && k>root->val)
                             //         root->right=res;
                            root->left=insert(root->left,k);
                     }
             else if(k>root->val)
                     {
                             // if(root->left==NULL && k<root->val)
                             //         root->left=res;
                             // if(root->right==NULL && k>root->val)
                             //         root->right=res;
                           root->right= insert(root->right,k);
                     }
             return root;
         }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        return insert(root,val);
    }
};
