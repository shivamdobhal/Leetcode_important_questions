589. N-ary Tree Preorder Traversal
.........................................................................................
/* constructor
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

void helper(Node* root,vector<int> &res)
{
        //base case
        res.push_back(root->val);
        
        if(root->children.size()==0)
                return;
        
        for(int i=0;i<root->children.size();i++)
        {
                helper(root->children[i],res);
        }
        
}

class Solution {
public:
    vector<int> preorder(Node* root) {
        if(root==NULL)
                return {};
            vector<int> res;
            
            helper(root,res);
            return res;
    }
};

.......................................................
  postorder ---590
.....................................................
class Solution {
public:
        
        void helper(Node* root,vector<int> &ans)
        {
              
        for(int i=0;i<root->children.size();i++)
                {
                 helper(root->children[i],ans);       
                }
                ans.push_back(root->val);
        }
        
    vector<int> postorder(Node* root) {
            
            if(root==NULL)
                    return {};
            vector<int> ans;
            
            helper(root,ans);
        return ans;
    }
};
