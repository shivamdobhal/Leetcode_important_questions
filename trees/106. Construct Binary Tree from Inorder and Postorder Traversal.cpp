intuition= 
    postorder=left right root 
                   last index of postorder is the root of  new tree

...................................................
class Solution {
public:
        
        TreeNode *helper(vector<int> inorder, vector<int> postorder,int bef_in,int aft_in,int bef_post,int aft_post)
        {
             //base condition
               if(bef_in>aft_in)
                       return NULL;
                       
                int root=postorder[aft_post];
                TreeNode *newtree=new TreeNode(root);
                int index=bef_in;
                
                for(index=bef_in;index<=aft_in;index++)
                {
                        if(inorder[index]==root)
                        {
                                break;
                        }
                }
                
             int inorder_left_size=index-bef_in;
             int inorder_right_size=aft_in-index;
                
     newtree->left=helper(inorder,postorder,bef_in,index-1,bef_post,bef_post+inorder_left_size-1);
    newtree->right=helper(inorder,postorder,index+1,aft_in,aft_post-inorder_right_size,aft_post-1);
                
                return newtree;
            
        }
        
        
        
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size()-1;
        int before_root_inorder=0;
        int after_root_inorder=n;
        int before_root_post=0;
        int after_root_post=n;    
                      
        return helper(inorder,postorder,before_root_inorder,after_root_inorder,before_root_post,after_root_post);
    }
};
