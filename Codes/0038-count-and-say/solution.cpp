class Solution {
public:
    string Solve(string s)
    {
        string str="";
        char num=s[0]; 
        char count='0';
        for(int i=0; s[i]!='\0';i++)
        {
            if(s[i]!=num)
            {
                str = str + count + num;
                num = s[i];
                count = '1';
            }
            else
            {
                count = count + 1;
            }
        }
        str = str + count + num;
        return str;
    }
    string countAndSay(int n) {
        
        string ans="1";
        for(int i=1;i<n;i++)
        {
            ans = Solve(ans);
        }
        
        return ans;
    }
};
