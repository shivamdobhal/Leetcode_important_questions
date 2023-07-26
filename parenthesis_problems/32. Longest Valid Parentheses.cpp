class Solution {
public:
    int longestValidParentheses(string s) {
        stack <int> stak;
        
        stak.push(-1);
        int maxi=0,sum=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                stak.push(i);
            }
            else
            {
                stak.pop();
                if(stak.empty())
                {
                    stak.push(i);
                }
                else{
                    sum=i-stak.top();
                    maxi=max(maxi,sum);
                }
            }
            
        }
        
        return maxi;
        
    }
};
