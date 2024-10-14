class Solution {
public:
    bool hasAlternatingBits(int n) {
        int q=n%2,q1=0;
        n/=2;
        while(n)
        {
            q1 = n%2;
            cout << q << " " << q1 << endl;
            if(!(q^q1)) return false;
            q=q1; n/=2;
        }
        return true;
    }
};
