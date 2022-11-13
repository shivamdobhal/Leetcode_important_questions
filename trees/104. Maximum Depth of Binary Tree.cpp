finding maximum height of the binary tree [by using level order traversal]
.............................................................................................................................
class Solution {
public:
    int maxDepth(TreeNode* root) {
        queue <TreeNode*> q;
        TreeNode* curr;
            int h=0;
         q.push(root);   
         while(!q.empty())
         {      
                 if(root==NULL) return h;
                 int n=q.size();
                 for(int i=0;i<n;i++)
                 {
                         curr=q.front();
                         q.pop();
                         if(curr->left!=NULL) q.push(curr->left);
                         if(curr->right!=NULL) q.push(curr->right);
                         
                 }
                h++;
         }
            return h;
    }
};
