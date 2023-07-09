class Solution {
public:
    void helper(TreeNode* root,int &sum)
     {
         if(root==NULL)
         {
             return ;
         }
         
         if( root->left!=NULL &&(root->left->left==NULL && root->left->right==NULL))
         {
             sum=sum+root->left->val;
         }
         helper(root->left,sum);
         helper(root->right,sum);
         
         
     }
     
     
    int sumOfLeftLeaves(TreeNode* root) {
        
        int sum=0;
        helper(root,sum);
        return sum;
            
    }
};
