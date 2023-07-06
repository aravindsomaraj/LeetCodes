class Solution {
public:
    bool isPalindrome(string s) {
        
        string ans = "";

        for(char& ch:s)
        {
            if(isdigit(ch) || isalpha(ch))
                ans += tolower(ch);
        }
        int l=0,r=ans.size()-1;
        while(l<=r) if(ans[l++]!=ans[r--]) return false;
        return true;
    }
};
