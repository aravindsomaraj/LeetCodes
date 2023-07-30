class Solution {
public:
    vector<string> v;
    void simple_tokenizer(string s)
    {
        stringstream ss(s);
        string word;
        while (ss >> word) v.push_back(word);
    }
    bool wordPattern(string pattern, string s) {

        
        unordered_map<char,string> mp;
        unordered_map<string,char> vp;
        simple_tokenizer(s);
        if(pattern.size()!=v.size()) return false;
        for(int i=0;i<pattern.size();i++)
        {
            if(mp.count(pattern[i]) && mp[pattern[i]]!=v[i]) return false;
            if(vp.count(v[i]) && vp[v[i]]!=pattern[i]) return false;
            mp[pattern[i]] = v[i];
            vp[v[i]] = pattern[i];
        }
        return true;
    }
};