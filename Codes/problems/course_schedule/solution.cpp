class Solution {
public:
    bool canFinish(int N, vector<vector<int>>& P) {
        
        vector<vector<int>> V (N);
        vector<int> visited (N);
        for(auto& v:P) V[v[0]].push_back(v[1]);

        function<bool(int)> hasCycle = [&](int cur) {
            for(auto& v:V[cur])
            {
                if(visited[v]==1) return true;
                if(visited[v]==2) continue;
                visited[v]=1;
                if(hasCycle(v)) return true;
                visited[v]=2;
            }
            return false;
        };
        for(int i=0;i<N;i++)
        {
            visited[i] = 1;
            if(hasCycle(i)) return false; ;
            visited[i] = 2;
        }

        return true;
    }
};