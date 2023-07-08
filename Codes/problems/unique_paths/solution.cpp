class Solution {
public:
    int dfs(int m, int n, int i, int j, vector<vector<int>>& M)
    {
        if(i<0 || j<0 || i==m || j==n) return 0;
        if(M[i][j]!=-1) return M[i][j];

        return M[i][j]=dfs(m,n,i+1,j,M)+dfs(m,n,i,j+1,M);
    }
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> M (m,vector<int>(n,-1));
        M[m-1][n-1]=1;
        return dfs(m,n,0,0,M);
    }
};