class Solution {
public:
    int uniquePaths(int m, int n) {
        
        if(m==1 && n==1)
            return 1;
        
        vector<vector<int>> dp (m,vector<int> (n,-1));
        
        fun(m-1,n-1,dp);
        
        return dp[m-1][n-1];
        
    }
    
    int fun(int i, int j, vector<vector<int>>& dp)
    {
        if(i==0 && j==0)
            return 1;
        
        if(i<0 || j<0)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        return dp[i][j] = fun(i,j-1,dp) + fun(i-1,j,dp);
        
    }
};
