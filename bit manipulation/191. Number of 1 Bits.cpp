class Solution {
public:
    int hammingWeight(uint32_t n) {
        
            int count=0;
            for(int i=0;i<32;i++)
            {
                    int last=n&1;
                    
                    //if last is 1 increment the counter
                    if(last==1)
                            count++;
                    n=n>>1;
            }
            return count;
    }
};
