class Solution {
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {

        vector<int> disc(n), low(n);
        int time = 1;
        vector<vector<int>> G(n), ans;
        for(auto& con:connections)
            G[con[0]].push_back(con[1]),G[con[1]].push_back(con[0]);
        
        function<void(int,int)> dfs = [&](int curr,int prev) {
            disc[curr] = low[curr] = time++;
            for(int next:G[curr]) {
                if(disc[next]==0) {
                    dfs(next,curr);
                    low[curr] = min(low[curr],low[next]);
                }
                else if(next!=prev) 
                    low[curr] = min(low[curr],disc[next]);
                if(low[next] > disc[curr])
                    ans.push_back({curr,next});
            }
        };

        dfs(0,-1);
        return ans;
        
    }
};