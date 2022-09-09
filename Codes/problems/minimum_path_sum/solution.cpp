class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>> mem (m,vector<int> (n,-1));
        
        return dp(grid, m-1, n-1, mem);
        
    }
    
    int dp(vector<vector<int>>& grid, int i, int j, vector<vector<int>>& mem)
    {
        if(i==0 && j==0)
            return grid[0][0];
        
        if(i<0 || j<0)
            return INT_MAX;
        
        if(mem[i][j]!=-1)
            return mem[i][j];
        
        mem[i][j] = min(dp(grid,i,j-1,mem),dp(grid,i-1,j,mem)) + grid[i][j];
        
        return mem[i][j];
    }
};