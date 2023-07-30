class Solution {
public:
    int addDigits(int num) {

        if(num<10) return num;
        int par = 0;
        while(num)
        {
            par = par + num%10;
            num/=10;
        }
        return addDigits(par);
    }
};
