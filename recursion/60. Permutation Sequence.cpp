class Solution {
public:
             
        void helper(vector<string> &ans,string &v,string &nums,int arr[],int &k)
        {
                if(v.size()==nums.size())
                {
                    ans.push_back(v);
                        k--;
                        if(k==0) return ;   
                }
                
                
                 for(int i=0;i<nums.size();i++)
                 {
                        if(arr[i]!=1)   // unvisited
                        {
                                arr[i]=1;
                                v+=nums[i];
                                helper(ans,v,nums,arr,k);
                                arr[i]=0;  //backtracking start
                                v.pop_back();
                        }
                         if (k==0) return;
                }
             
        }
        
        
    string getPermutation(int n, int k) {
        vector <string> ans;
        string v;
        string nums;
         int arr[n];   
            for(int i=1;i<=n;i++)
            {
                    nums+=to_string(i);
                    arr[i-1]=0;
            }
            
            helper(ans,v,nums,arr,k);
            
            return ans.back();          
    }
};
