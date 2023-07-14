class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        int N = recipes.size();
        unordered_map<string,vector<string>> G;
        unordered_map<string,int> indegree;
        vector<string> ans;

        unordered_set<string> Sup;
        for(auto x : supplies) Sup.insert(x); 

        for(auto& s:recipes) indegree[s]=0;

        for(int i=0;i<N;i++)
        {
            for(auto& s:ingredients[i])
            {
                if(!Sup.count(s))
                {
                    G[s].push_back(recipes[i]);
                    indegree[recipes[i]]++;
                }
            }
        }

        function<void(string)> dfs = [&](string s) {
            ans.push_back(s);
            indegree[s] = -1;
            for(auto& nextRep:G[s])
            {
                indegree[nextRep]--;
                if(!indegree[nextRep])
                    dfs(nextRep);
            }
        };

        for(auto& rep:recipes) 
            if(!indegree[rep]) dfs(rep);
        return ans;
    }
};