class Solution {
public:
    bool checkValidString(string s) {
        stack<int> charstore;
        stack<int> star;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                charstore.push(i);
            }
            else if(s[i]=='*')
            {
                star.push(i);
            }
            
            else{
                                   //for closing
                
                if(!charstore.empty())
                {
                    charstore.pop();
                }
                else if (!star.empty())
                {
                    star.pop();
                }
                else
                    return false;
            }
            
        }
        
        while(!charstore.empty())
        {
            if(star.empty())
                return false;
            
            else if(charstore.top()<star.top())
            {
                charstore.pop();
                star.pop();
            }
            else
                return false;
        }
        return true;
        
    }
};
