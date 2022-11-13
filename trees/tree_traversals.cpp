102. Binary Tree Level Order Traversal
...............................................
  class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;            //2d vector to store result
            queue <TreeNode*> q;               //queue           
            TreeNode* curr;                    //a pointer to store the values of queue
            if(root==NULL)
                    return {};              //if root null then return blank vector
            q.push(root);
            while(!q.empty())
            {
                    int n=q.size();
                    vector <int> a;           // vector 
                    for(int i=0;i<n;i++)
                    {
                           curr=q.front();
                           q.pop();
                            a.push_back(curr->val);
                            if(curr->left!=NULL)  q.push(curr->left);
                             if(curr->right!=NULL)  q.push(curr->right);
                    }
                    result.push_back(a);         //push value of a vector to 2D vector
            }
            return result;
    }
};





144.preorder traversal by recursion             
....................................................................root left right
class Solution {
public:
         vector <int> result;
        void pre(TreeNode *root)
        {
                  
            if(root==NULL)
                    return ;            
            else
            {
                    result.push_back(root->val);                  
                    pre(root->left);
                    pre(root->right);
            }  
        }
    vector<int> preorderTraversal(TreeNode* root) {       
            pre(root);           
            return result;
    }
};







94.inorder traversal by recursion 
.....................................................................................left root right
  class Solution {
public:
        vector <int> result;        
    void in_order(TreeNode *root){
            
            if(root==NULL)
                    return;
            else
            {
              in_order(root->left);
              result.push_back(root->val);
              in_order(root->right);      
            }                       
    }    
    vector<int> inorderTraversal(TreeNode* root) {
        
            in_order(root);
            return result;            
    }
};








postorder traversal by recursion 
....................................................................................... left right root
class Solution {
public:
        vector <int> result;        
    void post_order(TreeNode *root){
            
            if(root==NULL)
                    return;
            else
            {
              post_order(root->left);            
              post_order(root->right);  
              result.push_back(root->val);
            }                     
    }    
    vector<int> postorderTraversal(TreeNode* root) {
        
            post_order(root);
            return result;            
    }
};




