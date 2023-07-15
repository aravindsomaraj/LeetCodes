class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int k=2;
        vector<pair<int,int>> v (k,{0,0});
        for(auto& i:v) i.first = -prices[0];
        int maxs = 0;
        for(int& i:prices)
        {
            v[0].first = max(v[0].first,-i);
            v[0].second = max(v[0].second,v[0].first+i);
            for(int j=1;j<k;j++)
            {
                v[j].first = max(v[j].first,v[j-1].second-i);
                v[j].second = max(v[0].second,v[j].first+i);
                maxs = max(maxs,v[j].second);
            }
            maxs = max(maxs,v[0].second);
        }
        return maxs;
    }
};