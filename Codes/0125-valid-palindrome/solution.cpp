class Solution {
public:
    bool isChar(string& s, int i, char ch)
    {
        bool p=false;
        if(ch>='A' && ch<='Z')
        {
            s[i]=s[i]+32;
            p=true;
        }
        if(ch>='a' && ch<='z')
        {
            p=true;
        }
        return p;
    }
    bool isNum(string& s, int i, char ch)
    {
        bool p=false;
        if(ch>='0' && ch<='9')
        {
            p=true;
        }
        return p;
    }
    bool isPalindrome(string s) {
        
        int n = s.size();
        string str;
        for(int i=0; s[i]!='\0'; i++)
        {
            if(isChar(s,i,s[i]) || isNum(s,i,s[i]))
                str+=s[i];
        }
        cout << str;
        string newstr = str;
        reverse(str.begin(),str.end());
        if(newstr==str)
            return true;
        return false;
        
    }
};
