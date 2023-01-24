class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char,int> mp;
        int maxl=0,curr=0,start=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            curr++;
            while(mp[s[i]]>1)
            {
                // maxl=max(maxl,i-start);
                mp[s[start++]]--;
                curr--;
            }
            cout << curr << endl;
            maxl=max(maxl,curr);
        }
        return maxl;
    }
};