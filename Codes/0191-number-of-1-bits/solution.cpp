class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c=0;
        for(int i=0;i<32;i++)
        {
            c += n&0b1;
            n>>=1;
        }
        return c;
    }
};
