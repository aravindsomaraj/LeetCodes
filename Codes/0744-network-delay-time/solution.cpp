class Solution {
public:
    vector<pair<int, int>> G[6001];
    
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        int visited[6001] = {0};
        priority_queue<pair<int,int> > PQ;
        for(int i=0;i<=n;i++) {
            visited[i] = 1e7;
        }
        for(int i=0;i<times.size();i++) {
            G[times[i][0]].push_back({times[i][2], times[i][1]});
        }
        int cnt = 1;
        PQ.push({0 ,k});
        int ans = 0;
        visited[k] = 0;
        while(!PQ.empty()) {
            pair<int, int> u = PQ.top();
            PQ.pop();
            for(int i=0;i<G[u.second].size();i++) {
                pair<int, int> v = G[u.second][i];
                int val = (-1 * u.first) + v.first;
                if(visited[v.second]>val) {
                    visited[v.second] = val;
                    PQ.push({-1 * val, v.second});
                }
            }
        }
        for(int i=1;i<=n;i++) {
            if(k==i) continue;
            if(visited[i] == 1e7) continue;
            ans = max(ans, visited[i]);
            cnt++;
        }
        if(cnt == n) {
            return ans;
        }
        return -1;
    }
};
