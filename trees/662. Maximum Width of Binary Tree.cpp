class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        //by using level order traversal   <striver>
            int width=0;
            if(root==NULL) return width;
            queue<pair<TreeNode*,int>> q;
            q.push({root,0});           
                    
            while(!q.empty())
            {
                   int size=q.size();
                    int mini=q.front().second;
                    int first,last;
                    for(int i=0;i<size;i++)
                    {
                       long curr=q.front().second-mini;
                       TreeNode *node=q.front().first;
                       q.pop();
                       if(i==0)
                               first=curr;
                       if(i==size-1)
                               last=curr;
                       if(node->left)
                               q.push({node->left,2*curr+1});
                        if(node->right)
                               q.push({node->right,2*curr+2});     
                            
                    }
                   width=max(width,last-first+1); 
            }
            return width;
    }
};
