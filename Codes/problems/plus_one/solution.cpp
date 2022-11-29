class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();
        if(digits[n-1]==9)   
        {
            int i=n-1;
            while(i>=0 && digits[i]==9)
            {
                digits[i]=0;
                i--;
            }
            if(i==-1)
            {
                digits[0]=1;
                digits.push_back(0);
            }
            else
            {
                digits[i]+= 1;
            }
        }
        else
        {
            digits[n-1]+= 1;
        }
        
        
        // int num=0;
        // for(int& i: digits)
        // {
        //     num = num*10 + i;
        // }
        return digits;
    }
};