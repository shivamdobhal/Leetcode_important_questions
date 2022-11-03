1221.balanced_string
  Example 1:

Input: s = "RLRRLLRLRL"
Output: 4
Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.
Example 2:

Input: s = "RLRRRLLRLL"
Output: 2
Explanation: s can be split into "RL", "RRRLLRLL", each substring contains same number of 'L' and 'R'.
Note that s cannot be split into "RL", "RR", "RL", "LR", "LL", because the 2nd and 5th substrings are not balanced.
  
  
  solution==========================================================================================================================================
class Solution {
public:
    int balancedStringSplit(string s) {
            {
                    int c1=0,c2=0,count=0;
					//c1 will count the no. of R in string
					//c2 will count the no. of L in string
                    for(int i=0;i<s.length();i++)
                    {
                            if(s[i]=='R')
                                 c1++;
                            
                            else if(s[i]=='L')
                                    c2++;
                            
                            if(c1==c2)     // if both c1 and c2 are equal then it means it is a balances string 
                            {
                                 count++;
                                 c1=c2=0;
                            }
                    }
                    return count;
            }
    }
};
