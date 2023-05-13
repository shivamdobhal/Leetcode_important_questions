class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
          int result=0;
            for(int i=0;i<32;i++)
          {
                   //finding the last unknown bit 
                  int last=n&1;
                    
                  int lshift=last<<(31-i);
                    result=lshift|result;
                 
                    //right shift n by 1;
                    n=n>>1;
          }
            return result;
    }
};
