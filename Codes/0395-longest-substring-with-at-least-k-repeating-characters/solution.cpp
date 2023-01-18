class Solution {
public:
    int longestSubstring(string s, int k) {

        if(s=="")
            return 0;
        unordered_map<char,int> mp;
        int pvt=-1;
        for(char& ch:s)
        {
            mp[ch]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second<k)
            {
                cout << it->second << endl;
                pvt=distance(s.begin(),find(s.begin(),s.end(),it->first));
                break;
            }
        }    
        if(pvt==-1)
            return s.size();
        else
            return max(longestSubstring(s.substr(0,pvt),k),longestSubstring(s.substr(pvt+1),k));
        
    }
};
