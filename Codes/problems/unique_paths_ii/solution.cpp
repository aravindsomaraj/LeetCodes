class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& g) {
        
        int m = g.size();
        int n = g[0].size();
        if(g[0][0]==1)
            return 0;
        if(m==1 && n==1)
        {
            return 1;
        }
        
        vector<vector<int>> dp (m,vector<int> (n,-1));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(g[i][j]==1)
                    dp[i][j]=0;
            }
        }
        
        fun(m-1,n-1,dp);
        return dp[m-1][n-1];
        
    }
    
    int fun(int i, int j,vector<vector<int>>& dp)
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


