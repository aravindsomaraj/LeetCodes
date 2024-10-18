class Solution {
public:
    bool isVowel(char ch)
    {
        ch = tolower(ch);
        switch(ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': return true; break;;
            default: return false;
        }
        return false;
    }
    string toGoatLatin(string s) {
        string wd="",ss=""; s = s+" ";
        int x=1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] != ' ') wd = wd+s[i];
            else
            {
                if(isVowel(wd[0])) ss = ss + wd;
                else ss = ss + wd.substr(1) + wd[0];

                ss=ss+"ma";
                for(int j=1;j<=x;j++) ss = ss + "a";
                x++, wd="", ss=ss+" ";
            }
        }
        return ss.substr(0,ss.size()-1);
    }
};
