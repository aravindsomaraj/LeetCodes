class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map<char,int> mp;
        for(char& ch:s) mp[ch]++;

        int odd=0,even=0,f=0;
        for(auto& it:mp)
        {
            if(it.second&1) f=1,odd = odd + it.second - 1;
            else    even = even + it.second;
        }
        return odd + even + (f? 1 : 0);
    }
};
