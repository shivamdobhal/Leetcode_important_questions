class Solution {
public:
        
    int heightchecker(TreeNode * root,int &height)
    {
           
            
        if(root==NULL) return 0;
           int l=heightchecker(root->left,height)+1;
           int r=heightchecker(root->right,height)+1;
            
            if(abs(l-r)>1){
                    height=0;
                    return height;
            }
                    
            return max(l,r);          
    }
        
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
                return true;
            int height=-1;
         heightchecker(root,height);
            if(height==0) return false;
            else
                    return true;
    }
};
