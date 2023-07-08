class Solution {
public:
    vector<vector<int>> G;
    vector<int> inDegree;
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1) return {0};
        G.resize(n);inDegree.resize(n);
        for(auto& v:edges)
        {
            G[v[0]].push_back(v[1]); inDegree[v[0]]++;
            G[v[1]].push_back(v[0]); inDegree[v[1]]++;
        }

        queue<int> q;
        for(int i=0;i<n;i++) if(inDegree[i] == 1) q.push(i),inDegree[i]--;
        vector<int>ans;
        while(!q.empty())
        {
            int size = q.size();
            ans.clear();
            for(int i=0;i<size;i++)
            {
                int top = q.front(); q.pop();
                ans.push_back(top);
                for(auto& adj:G[top])
                {
                    if(--inDegree[adj]==1)
                        q.push(adj);
                }
            }
        }
        return ans;
    }
};
