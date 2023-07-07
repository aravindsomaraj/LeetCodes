class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        vector<vector<int>> ans;
        priority_queue<pair<int,vector<int>>,vector<pair<int,vector<int>>>, greater<pair<int,vector<int>>>> pq;

        function<int(vector<int>&)> sqrt = [&](vector<int>& v) {
            return v[0]*v[0] + v[1]*v[1];
        };
        for(auto& v:points)
        {
            pq.emplace(sqrt(v),v);
        }
        while(k)
        {
            ans.push_back(pq.top().second);
            pq.pop();k--;
        }
        return ans;
    }
};
