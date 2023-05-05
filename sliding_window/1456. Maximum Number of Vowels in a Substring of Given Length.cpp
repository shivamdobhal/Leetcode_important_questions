// 1456. Maximum Number of Vowels in a Substring of Given Length


class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.length();
        int window=k;
        int maxi=INT_MIN;
        int i;
        int count=0;
            for(int i=0;i<k;i++)
            {
                     if(s[i]=='a' || s[i]=='e' || s[i]=='i'  || s[i]=='o'  || s[i]=='u')
                            {
                                    count++;
                              maxi=max(maxi,count);       
                                   
                            }
            }
            
       int x =0;        
            for(int j=k;j<n;j++)
            {
                    
                    
if(s[j]=='a' || s[j]=='e' || s[j]=='i'  || s[j]=='o'  || s[j]=='u')
                            {
                                    count++;
                                    
                            }
                   
                    if(s[x]=='a' || s[x]=='e' || s[x]=='i'  || s[x]=='o'  || s[x]=='u')
                            {
                                    count--;
                            
                                    
                            }
                           x++;
                  maxi=max(maxi,count);          
                   
            }
            return maxi;
    }
};
