class Solution {
public:
    int New(int n)
    {
        int ans=0;
        while(n)
        {
            ans += pow(n%10,2);
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        
        int slow = n, fast = New(n);
        while(slow!=fast)
        {
            slow = New(slow);
            fast = New(New(fast));
        }
        return slow==1;
    }
};