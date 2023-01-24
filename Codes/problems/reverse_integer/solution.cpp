class Solution {
public:
    int reverse(int x) {

        int f=0;
        (x<0)?f=-1:f=1;
        if(x==INT_MIN)
            return 0;
        x*=f;
        int temp=x;
        int rev=0;
        while(temp>=10)
        {
            int dig=temp%10;
            temp/=10;
            rev=rev*10+dig;
        }
        if(rev>(INT_MAX)/10)
            return 0;
        else
        {
            return (f*(rev*10+temp));
        }
    }
};