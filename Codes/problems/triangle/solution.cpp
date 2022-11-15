class Solution {
public:
    void Solve(vector<vector<int>>& triangle, int h, int i, vector<vector<int>>& dp)
    {
        if(h<0)
            return;
        
        for(int k=0; k<triangle[h].size();k++)
        {
            dp[h][k] = triangle[h][k] + min(dp[h+1][k],dp[h+1][k+1]);
        }
        
        Solve(triangle,h-1,0,dp);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        
        
        int n = triangle.size();
        
        if(n==1)
            return triangle[0][0];
        
        vector<vector<int>> dp (n,vector<int> (n,0));
        
        for(int i=0; i<triangle[n-1].size();i++)
        {
            dp[n-1][i]=triangle[n-1][i];
        }
        
        Solve(triangle,n-2,0,dp);
        
        return dp[0][0];
    }
};