class Solution {
public:
    long long minimumSteps(string s) {
        long sum=0,count=0;
        for(int i=size(s)-1;i>=0;i--)
        {
            if(s[i]=='1') sum += count;
            else count++;
        }
        return sum;
    }
};
