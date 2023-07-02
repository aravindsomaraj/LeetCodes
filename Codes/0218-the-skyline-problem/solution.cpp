class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        
        vector<vector<int>> ans;
        vector<pair<int,int>> mp;
        for(auto& v:buildings)
        {
            mp.emplace_back(v[0],-v[2]);
            mp.emplace_back(v[1],v[2]);
        }
        sort(mp.begin(), mp.end());

        multiset<int> s {0};
        int currh = 0;
        
        for(auto& it:mp)
        {
            int h = it.second;
            // cout << "hi" << it.first << " ";
            if(h < 0)
                s.insert(-h);
            else
                s.erase(s.find(h));
            
            auto top = *s.rbegin();
            if(currh != top)
            {
                currh = top;
                ans.push_back({it.first,currh});
            }
        }
        return ans;
    }
};
