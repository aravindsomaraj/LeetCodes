class Solution {
public:
    int c,m,n;
    void dfs(vector<vector<char>>& grid, int i, int j)
    {
        if(i==m || j==n || i<0 || j<0 || grid[i][j]=='.' || grid[i][j]=='0')
            return;
        
        grid[i][j]='.';
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        c=0;
        m=grid.size();n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    c++; dfs(grid,i,j);
                }
            }
        }
        return c;
    }
};