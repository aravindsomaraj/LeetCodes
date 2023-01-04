class Solution {
public:
    int trailingZeroes(int n) {

        if(n==0)
            return 0;
        int temp = n;
        int c=0;
        while(temp>0)
        {
            temp/=5;
            c+=temp;
        }
        return c;
        
    }
};
