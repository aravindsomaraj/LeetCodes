class Solution {
public:
    int titleToNumber(string s) {

        int l=s.size()-1,num=0;
        for(int i=0;s[i]!='\0';i++)
        {
            num += pow(26,l--)*(s[i]-64);
        }
        return num;
    }
};