class Solution {
public:
    
   void reverse(string &s,int i,int j)
   {
       while(i<j)
       {
           swap(s[i],s[j]);
           i++;
           j--;
       }
    
}
    
    string reverseWords(string s) {
        
        
        int start=0;
        int end=0;
        int x=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                
                end=i-1;
                
            reverse(s,start,end);
           
                start=i+1;
            }
          
         else if(i==s.size()-1)
         {
             end=i;
             reverse(s,start,end);
         }
        }
         
        return s;
    }
};
