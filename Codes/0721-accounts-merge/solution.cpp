class Solution {
public:
    void dfs(string& email) {
        seen.insert(email);
        ans.back().push_back(email);
        for(auto& adjEmail : G[email]) 
            if(!seen.count(adjEmail)) 
                dfs(adjEmail);        
    }
    vector<vector<string>> accountsMerge(vector<vector<string>>& A) {        
        for(auto& acc : A)                            
            for(int i = 2; i < size(acc); i++)              // create graph with email as nodes and,
                G[acc[i]].push_back(acc[i-1]),              // add edges between adjacent nodes of same account
                G[acc[i-1]].push_back(acc[i]);
        
        for(auto& acc : A) 
            if(!seen.count(acc[1])) {                       // If an email from a account is not previously seen,
                ans.push_back({acc[0]});                    // create new account & insert person's name
                dfs(acc[1]);                                // perform dfs to find all his emails & add it to the list
                sort(begin(ans.back())+1, end(ans.back())); // sort the emails
            }            
        
        return ans;
    }
private:
    unordered_map<string, vector<string>> G;  // adjacency list graph with email as nodes and edges between adjacent email of same account
    unordered_set<string> seen;               // to mark an email as visited in DFS
    vector<vector<string>> ans;               // final answer after merging accounts
};
// class DisjointSet{
//     public:
//         vector<int>parent;
//         vector<int>rank;

//         DisjointSet(int n)
//         {
//             parent.resize(n+1);
//             rank.resize(n+1, 0);
//             for(int i = 0; i<=n; i++)
//                 parent[i] = i;
//         }

//         int findParent(int node)
//         {
//             if(parent[node] == node)
//                 return node;
//             return parent[node] = findParent(parent[node]);
//         }

//         void UnionByRank(int u, int v)
//         {
//             u = findParent(u);
//             v = findParent(v);
//             if(u == v)
//                 return;
//             if(rank[u]<rank[v])
//                 parent[u] = v;
//             else if(rank[v]<rank[u])
//                 parent[v] = u;
//             else
//             {
//                 parent[u] = v;
//                 rank[v]++;
//             }
//         }
// };

// class Solution {
// public:
//     vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
//         int n = accounts.size();
//         DisjointSet ds(n);

//         unordered_map<string, int>mp;
//         for(int i = 0; i<n; i++)
//         {
//             for(int j = 1; j<accounts[i].size(); j++)
//             {
//                 string mail = accounts[i][j];
//                 if(mp.find(mail)==mp.end())
//                 {
//                     mp[mail] = i;
//                 }
//                 else
//                 {
//                     ds.UnionByRank(i, mp[mail]);
//                 }
//             }
//         }

//         vector<string>mails[n];
//         for(auto it: mp)
//         {
//             string mail = it.first;
//             int user = it.second;

//             if(ds.findParent(user)==user)
//                 mails[user].push_back(mail);
//             else
//             {
//                 mails[ds.parent[user]].push_back(mail);
//             }
//         }

//         vector<vector<string>>result;
//         for(int i = 0; i<n; i++)
//         {
//             if(mails[i].size()==0)
//                 continue;
//             vector<string>temp;
//             temp.push_back(accounts[i][0]);
//             sort(mails[i].begin(), mails[i].end());
//             for(auto it: mails[i])
//                 temp.push_back(it);
//             result.push_back(temp);
//         }
//         return result;
//     }
// };








