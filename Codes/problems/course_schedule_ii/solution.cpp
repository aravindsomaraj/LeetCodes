class Solution {
public:
    vector<int> findOrder(int N, vector<vector<int>>& pre) {

        vector<vector<int>> G (N);
        vector<int> indegree (N);
        vector<int> ans;
        
        for(auto& p:pre)
        {
            G[p[1]].push_back(p[0]);
            indegree[p[0]]++;
        }

        function<void(int)> dfs = [&](int cur) {

            ans.push_back(cur);
            indegree[cur]=-1;
            for(auto& v:G[cur])
            {
                if(--indegree[v]==0)
                    dfs(v);
            }
        };

        for(int i=0;i<N;i++)
        {
            if(!indegree[i]) dfs(i);
        }

        if(ans.size()==N) return ans;
        return {};
    }
};