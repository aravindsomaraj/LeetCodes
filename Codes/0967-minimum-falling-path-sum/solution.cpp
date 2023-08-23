class Solution {
public:
vector<vector<int>> dp;
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        dp.resize(m,vector<int>(n,0));
        

        for(int i=0;i<n;i++) dp[m-1][i] = matrix[m-1][i];

        for(int i=m-2;i>=0;i--)
        {
            for(int j=0;j<n;j++)
            {
                dp[i][j] = matrix[i][j] + min({j>0?dp[i+1][j-1]:INT_MAX,dp[i+1][j],j<n-1?dp[i+1][j+1]:INT_MAX});
            }
        }
        // for(int i=0;i<m;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        return *min_element(dp[0].begin(),dp[0].end());
    }
};
