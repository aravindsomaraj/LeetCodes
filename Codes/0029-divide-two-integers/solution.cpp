class Solution {
public:
    int divide(int dividend, int divisor) {

        if(dividend==INT_MIN && divisor==-1)
            return INT_MAX;

        long dvd = labs(dividend);long dvs = labs(divisor), ans=0;
        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
        while(dvs<=dvd)
        {
            long temp = dvs, m = 1;
            while(temp<<1 <= dvd)
            {
                temp <<= 1;
                m <<= 1;
            }
            ans += m;
            dvd -= temp;
        }
        return sign*ans;
    }
};
