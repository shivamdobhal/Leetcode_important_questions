Example 1:

Input: s = "aab"
Output: [["a","a","b"],["aa","b"]]



                                                                  aab
                                                        /          |          \
                                                    x=a            x=aa      x=aab(wrong call)
                                                    y=ab           y=b       y=" "
                                                    /                                            
                                              v=['a']                 
                                          new string=ab
                                              /         \                                         
                                          x=a           x=ab(wrong)
                                          y=b           y=" "
                                                               
                                         |
                                 v=['a','a']                 
                                 new string=b
                                 x=b           
                                 y=" "
                    
                          new string = " "                                          
                       now v=['a','a','b']
                       then y becomes empty {s.size()==0 }
                              -->base condition occurs
                              -->put the value of v to ans vector
                              
                              then backtrack
              
--------------------------------------------------------------------------------------------------------------------------------------------------------
CODE----------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
public:
        
        void helper(string s,vector<vector<string>> &ans,vector<string> v)
        {
             if(s.size()==0)              // if string ends
             {
                     ans.push_back(v);
                     return;
             }
                
                for(int i=1;i<=s.size();i++)
                {
                        string x=s.substr(0,i);
                        if(ispalindrome(x))
                        {
                                v.push_back(x);
                                string y=s.substr(i,s.size()-1);
                                helper(y,ans,v);
                                v.pop_back();    //backtrack
                        }
                }
                
        }
        
        bool ispalindrome(string x)
        {
                string y=x;
                reverse(x.begin(),x.end());
                if(x==y) return true;
                else
                        return false;                
        }
        
        
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
         vector<string> v;
            helper(s,ans,v);
            return ans;
    }
};
