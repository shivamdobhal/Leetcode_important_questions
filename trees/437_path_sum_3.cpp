 METHOS 1--------------------------------------TIME COMPLEXITY=o(n*n)

class Solution {
public:
       int count=0;
        long sum=0;
    int pathSum(TreeNode* root, int targetSum) {
        
            if(root==NULL) return 0;
      
            helper(root,targetSum,count,sum);
      
            pathSum( root->left, targetSum);
            pathSum( root->right,targetSum);
      
            return count;
                        
    }
        void helper(TreeNode* root,int &target,int &count,long sum)
        {        
                if(root==NULL) return;
          
                 sum=sum+root->val;       
                
                if(sum==target)
                        count++;
                
                helper(root->left,target,count,sum);
                helper(root->right,target,count,sum);
             
        }
};


METHOD 2---------------------------------------------------------------------------------------------------------------------------------------------------------
OPTIMISED TIMEC COMPLEXITY=O(N)
  
