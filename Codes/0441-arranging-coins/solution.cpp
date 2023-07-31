class Solution {
public:
    int arrangeCoins(int n) {
        int i=1,c=0;
        while((n-i)>=0)
        {
            n = n-i++;
            c++;
        }
        return c;
    }
};
