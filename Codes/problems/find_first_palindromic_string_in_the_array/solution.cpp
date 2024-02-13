class Solution {
public:
    bool isPalin(string s)
    {
        int l=0, r=s.size()-1;
        while(l<r)
        {
            if(s[l++]!=s[r--]) return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        
        for(string& s:words)
        {
            if(isPalin(s)) return s;
        }
        return "";
    }
};