class Solution {
public:
    int Solve(int m, int n, int i, int j, vector<vector<int>>& dp)
    {
        if(i==m || j==n)
            return 0;
        if(i==m-1 && j==n-1)
            return 1;
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        dp[i][j]=Solve(m,n,i+1,j,dp)+Solve(m,n,i,j+1,dp);
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        if(m==1 && n==1)
            return 1;
        vector<vector<int>> dp (m, vector<int> (n,-1));
        Solve(m,n,0,0,dp);
        return dp[0][0];
    }
};