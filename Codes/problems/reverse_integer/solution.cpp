class Solution {
public:
    int reverse(int x) {
        
        if(x==0)
            return x;
        int rev=0;
        int y=abs(x);
        while(y>0)
        {
            
            int d = y%10;
            if(rev <= (INT_MAX)/10)
                rev=rev*10+d;
            else
                return 0;
            y/=10;
        }
        
        if(x>=0)
            return rev;
        else 
            return -rev;
        
    }
};