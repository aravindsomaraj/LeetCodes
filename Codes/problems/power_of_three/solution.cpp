class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n<=0)
            return false;
        int d=0;
        while(n>1 && d==0)
        {
            d=n%3;
            n=n/3;
        }
        
        if(n==1 && d==0)
            return true;
        return false;
        
    }
};