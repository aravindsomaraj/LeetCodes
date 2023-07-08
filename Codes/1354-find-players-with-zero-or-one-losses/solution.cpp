class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {

        vector<vector<int>> ans;
        map<int,int> mp;
        vector<int> win,loss;
        for(auto& v:matches)
        {
            mp[v[1]]--;
            if(mp.find(v[0])==mp.end()) mp[v[0]]=0;
        }
        for(auto& v:mp)
        {
            if(v.second==0)
                win.push_back(v.first);
            else if(v.second==-1) loss.push_back(v.first);
        }
        return {win,loss};
    }
};
