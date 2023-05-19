//using inorder traversal
class Solution {
public:
        vector<int> res;
        
        void inorder(TreeNode * root)
        {
                if(root==NULL)
                        return ;
                else
                {
                        inorder(root->left);
                        res.push_back(root->val);
                        inorder(root->right);
                }
        }
        
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        int mini=INT_MAX;
            
            for(int i=0;i<res.size()-1;i++)
            {
                      
                              int diff;
                              diff=abs(res[i+1]-res[i]);
                              mini=min(diff,mini);
                     
            }
            return mini;
    }
};
