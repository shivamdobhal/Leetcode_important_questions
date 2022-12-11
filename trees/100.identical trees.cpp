class Solution {
public:
        bool trei(TreeNode* p, TreeNode* q)
        {
                if(p==NULL && q==NULL)
                        return true;
                if(p!=NULL && q==NULL)
                        return false;
                 if(p==NULL && q!=NULL)
                        return false;
                
            
                if(p->val!=q->val)
                        return false;
           
               return trei(p->left,q->left) &&  trei(p->right,q->right);
                
                            
                
        }
        
        
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return trei(p,q);
    }
};
