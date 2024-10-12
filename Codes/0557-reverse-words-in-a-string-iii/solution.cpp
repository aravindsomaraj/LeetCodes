class Solution {
public:
    string reverseWord(string s)
    {
        reverse(s.begin(),s.end());
        return s;
    }
    string reverseWords(string s) {
        string wd="",rev="";
        s=s+" ";
        for(char &ch:s)
        {
            if(ch!=' ')
                wd = wd + ch;
            else
            {
                rev += " " + reverseWord(wd);
                wd = "";
            }
        }
        return rev.substr(1);
    }
};
