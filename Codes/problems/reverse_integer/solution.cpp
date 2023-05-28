class Solution {
public:
    int reverse(int x) {

        if(!x) return 0;

        int y = abs(x),rev=0;

        while(y>0)
        {
            int d=y%10;
            if(rev <= (INT_MAX)/10)
                rev = rev*10 + d;
            else return 0;
            y/=10;
        }
        x = x>0? rev:-rev;
        return x;
    }
};