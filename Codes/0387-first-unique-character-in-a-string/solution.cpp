class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int> mp;
        
        for(int i=0;s[i]!='\0';i++)
        {
            mp[s[i]]++;
            // cout << mp[s[i]] << " ";
        }
        
        
        for(int i=0;s[i]!='\0';i++)
        {
            if(mp[s[i]]==1)
                return i;
        }
        
        // cout << endl;
        // for(auto it=mp.begin();it!=mp.end();it++)
        // {
        //     cout << it->first << " " << it->second;
        //     // if(it->second==1)
        //     //     return distance(mp.begin(),it);
        // }
        
        return -1;
    }
};
