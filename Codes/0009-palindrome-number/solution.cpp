class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0) return false;
        int rev=0;
        int temp = x;
        while(temp)
        {
            int d = temp%10;
            if(rev>INT_MAX/10 || (rev==INT_MAX/10 && d>7))
                return false;
            rev = rev*10 + d;
            temp/=10;
        }
        return rev==x;
    }
};
