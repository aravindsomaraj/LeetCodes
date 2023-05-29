class Solution {
public:
    string Solve(string s)
    {
        if(s=="")
            return "1";
        int c=0; string ans="";
        for(int i=0;s[i]!='\0';)
        {
            c=0;
            char temp = s[i];
            while(i<s.size() && temp==s[i])
            {
                c++;i++;
            }
            ans += to_string(c) + temp;
        }
        return ans;
    }
    string countAndSay(int n) {

        string s="";
        for(int i=1;i<=n;i++)
        {
            s = Solve(s);
        }
        return s;
    }
};
