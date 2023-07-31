class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x^y;
        int c=0;
        while(z)
        {
            z&1? c++ : NULL;
            z>>=1;
        }
        return c;
    }
};
