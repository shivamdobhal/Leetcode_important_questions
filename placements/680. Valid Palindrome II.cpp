class Solution {
public:
    
    bool ispalindrome(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;j--;
                
            }
            if(s[i]!=s[j])
            {
                return false;
            }
        }
        return true;
    }
    
    
    bool validPalindrome(string s) {
        int l=0,r=s.size()-1;
        
        while(l<r)
        {
            if(s[l]==s[r])
            {
                l++;
                r--;
            }
            else
            {
                return ispalindrome(s,l+1,r) || ispalindrome(s,l,r-1);
            }
        }
        return true;
    }
};
