class Solution {
public:
    int titleToNumber(string s) {

        int l=s.size()-1,ans=0;
        for(int i=0;s[i]!='\0';i++)
        {
            ans += pow(26,l--)*(s[i]-'A'+1);
        }
        return ans;
    }
};
