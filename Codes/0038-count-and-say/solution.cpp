class Solution {
public:
    string Solve(string s)
    {
        char count='0';
        char ch=s[0];string ans="";
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]!=ch)
            {
                ans=ans+count+ch;
                ch=s[i];
                count='1';
            }
            else
                count=count+1;
        }
        ans=ans+count+ch;
        return ans;
    }
    string countAndSay(int n) {
        string s="1";
        for(int i=1;i<n;i++)
        {
            s=Solve(s);
        }
        return s;
    }
};
