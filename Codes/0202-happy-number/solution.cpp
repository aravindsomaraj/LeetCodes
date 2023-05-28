class Solution {
public:
    int New(int n)
    {
        int new_n = 0;
        while(n!=0)
        {
            new_n += pow(n%10,2);
            n /= 10;
        }
        return new_n;
    }
    bool isHappy(int n) {

        if(n==1)
            return true;
        
        int slow = n, fast = New(n);
        while(slow!=fast)
        {
            slow = New(slow);
            fast = New(New(fast));
        }
        return slow == 1;
    }
};
