class Solution {
public:
    int reverse(int x) {
        int f = x>0? 1 : -1;

        int temp = abs(x), rev = 0;
        while(temp>0)
        {
            int d = temp%10;
            if(rev > INT_MAX/10)
                return 0;
            rev = rev*10 + d;
            temp/=10;
        }
        return rev*f;
    }
};
