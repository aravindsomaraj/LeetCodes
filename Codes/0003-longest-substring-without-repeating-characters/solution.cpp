class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int i=0,j=-1,ans=0;
        map<char,int> mp;

        while(i<s.size())
        {
            if(mp.find(s[i])!=mp.end() && j<mp[s[i]]) 
                j=mp[s[i]];
            mp[s[i]]=i;
            ans = max(ans,i-j);
            i++;
        }
        return ans;
    }
};
