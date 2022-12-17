class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q1;
        int count=0,sum=0;
        q1.push(root);    
        while(!q1.empty()) // for calculating tree height
        {
                int n=q1.size();//1
                for(int i=0;i<n;i++)
                {
                        TreeNode* newnode=q1.front();
                        if(newnode->left)
                                q1.push(newnode->left);
                        if(newnode->right)
                                q1.push(newnode->right);
                        q1.pop();
                        
                }
                count++;
        }
        
        //we are reusing the same queue again but we can use another                          queue   as q1 is empty now 
        //again start traversing the tree    
            int start=0;
            q1.push(root);
             while(start<count-1) // for calculating tree sum
        {
                int n=q1.size();//1
                for(int i=0;i<n;i++)
                {
                        TreeNode* newnode=q1.front();
                        if(newnode->left)
                                q1.push(newnode->left);
                        if(newnode->right)
                                q1.push(newnode->right);
                        q1.pop();
                        
                }
                start++;
        }
            while(!q1.empty())   //some values which are present at deepest node will be present in the queue
            {
                    TreeNode *res=q1.front();
                    sum=sum+res->val;
                    q1.pop();
            }
            
            return sum;
    }
};
