class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {

        int m=s1.size();
        int n=s2.size();
        int o=s3.size();
        if((m+n)!=o) return false;
        vector<vector<int>> dp (m+1,vector<int>(n+1,0));

        dp[0][0]=1;

        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i>0 && s3[i+j-1]==s1[i-1])
                    dp[i][j]=dp[i-1][j];
                if(j>0 && s3[i+j-1]==s2[j-1])
                    dp[i][j] |= dp[i][j-1];
            }
        }
        return dp[m][n];
    }
};