
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
     int l=0;
     int r=nums.size()-1;
           return helper(nums,l,r); 
    }
        
        TreeNode* helper(vector<int>& nums,int l,int r)
        {
                if(l>r) 
                        return NULL;
                
                int mid=l+(r-l)/2;
                //creating a node having only a value & do not have ref to left and right
                TreeNode *root=new TreeNode(nums[mid]);
                
                //for giving left reference  
                root->left=helper(nums,l,mid-1);
                
                // for giving right reference
                root->right=helper(nums,mid+1,r);
                return root;
        }
};
