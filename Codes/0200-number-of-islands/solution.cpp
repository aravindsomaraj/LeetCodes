class Solution {
public:
    int m,n;
    void dfs(vector<vector<char>>& grid, int i, int j)
    {
        if(i<0 || j<0 || i==m || j==n || grid[i][j]<='0')
            return;
        
        grid[i][j] = '0'-1;
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j-1);
        dfs(grid,i,j+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size() , n = grid[0].size();
        int color = 0;
        for(int i=0;i<m;i++) for(int j=0;j<n;j++)
        {
            if(grid[i][j]=='1')
                color++, dfs(grid,i,j);
        }
        return color;
    }
};
