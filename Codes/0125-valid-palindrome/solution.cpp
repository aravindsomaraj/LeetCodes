class Solution {
public:
    bool isPalindrome(string s) {

        string newS="";
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || isdigit(s[i]))
                newS+=tolower(s[i]);
        }
        string temp = newS;
        reverse(newS.begin(),newS.end());
        if(temp == newS)
            return true;
        return false;
    }
};
