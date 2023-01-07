class Solution {
public:
    void dfs(vector<vector<char>>& grid, vector<vector<int>>& dp, int i, int j)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || dp[i][j]==1 || grid[i][j]=='0')
            return;

        dp[i][j]=1;
        if(grid[i][j]=='1')
        {
            dfs(grid,dp,i+1,j);
            dfs(grid,dp,i-1,j);
            dfs(grid,dp,i,j+1);
            dfs(grid,dp,i,j-1);
        }
    }
    int numIslands(vector<vector<char>>& grid) {

        int m = grid.size();
        int n = grid[0].size();
        int c=0;
        vector<vector<int>> dp (m, vector<int> (n,0));

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(dp[i][j]!=1 && grid[i][j]=='1')
                {
                    c++;
                    dfs(grid,dp,i,j);
                }
            }
        }

        return c;
    }
};