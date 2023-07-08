class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        int target = p.size() , window = p.size(), n = s.size();
        int start = 0, end = 0;
        unordered_map<char,int> mp;
        for(char& ch:p) mp[ch]++;

        vector<int> ans;
        
        while(end-start+1 < window)
        {
            if(mp.find(s[end])!=mp.end())
            {
                if(mp[s[end]]>0) target--;
                mp[s[end]]--;
            }
            end++;
        }
        while(end < n)
        {
            if(mp.find(s[end])!=mp.end())
            {
                if(mp[s[end]]>0) target--;
                mp[s[end]]--;
            }
            if(target==0)
            {
                ans.push_back(start);
            }
            if(mp.find(s[start])!=mp.end())
            {
                if(mp[s[start]]>=0) target++;
                mp[s[start]]++;
            }
            start++; end++;
        }
        return ans;
    }
};
