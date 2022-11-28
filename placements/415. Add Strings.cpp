Example 1:

Input: num1 = "11", num2 = "123"
Output: "134"
Example 2:

Input: num1 = "456", num2 = "77"
Output: "533"

class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.length()-1;
        int j=num2.length()-1;
        string res;
      
        int carry=0;    
    
            
            while(i>=0 || j>=0)
            {
                  
                    if(i>=0 && j>=0)          //if both exist
                    {
                    res.push_back(((num1[i]-48+num2[j]-48+carry)%10)+48);
                            carry=(num1[i]-48+num2[j]-48+carry)/10;
                            i--;
                            
                            j--;
                    }
                                      
                    else if(j>=0)     //if only num2 exist
                    {
                       res.push_back(((num2[j]-48+carry)%10)+48) ;
                            carry=(num2[j]-48+carry)/10;
                            j--;      
                    }
                    
                    else if(i>=0)            //if only num1 exist
                    {
                          res.push_back(((num1[i]-48+carry)%10)+48) ;
                            carry=(num1[i]-48+carry)/10;
                            i--;
                    }
                    
                    
                    
            }
            if(carry)
            {
                    res.push_back(carry+48);
            }
            reverse(res.begin(),res.end());
            
            return res;
    }
};
