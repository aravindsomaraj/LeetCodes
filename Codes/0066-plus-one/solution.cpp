class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();
        int carry=1,sum=0;
        for(int i=n-1;i>=0;i--)
        {
            sum = carry + digits[i];
            carry = sum/10;
            sum = sum%10;
            digits[i] = sum;
        }
        if(carry)
            digits.insert(digits.begin(),carry);
        return digits;
    }
};
