class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        auto prime = [](int n) {
            int c=0;
            for(int i=1;i<=n;i++)
            {
                if(n%i == 0) c++;
            }
            return c==2;
        };

        auto checkPrimeBits = [prime](int n) {
            int c=0;
            while(n) {
                if(n%2) c++;
                n/=2;
            }
            return prime(c);
        };
        int c=0;
        for(int i=left;i<=right;i++)
        {
            if(checkPrimeBits(i)) c++;
        }
        return c;
    }
};
