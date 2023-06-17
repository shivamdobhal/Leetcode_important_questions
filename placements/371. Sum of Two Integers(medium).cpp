Given two integers a and b, return the sum of the two integers without using the operators + and -.

  class Solution {
public:
    int getSum(int a, int b) {
        uint32_t sum=a^b;
        uint32_t c=a&b;
        int actualcarry=c<<1;
        
        while(c!=0)
        {
            c=sum&actualcarry;
            sum=sum^actualcarry;            
            actualcarry=c<<1;
        }
        
        return sum;
    }
};
