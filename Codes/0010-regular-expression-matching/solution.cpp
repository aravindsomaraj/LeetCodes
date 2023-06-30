class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size();
        int n = p.size();

        vector<vector<int>> dp (m+1,vector<int>(n+1,0));
        dp[0][0]=1;
        for(int i=0;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i>0 && j>1 && dp[i-1][j] && ((p[j-2]=='.' || s[i-1]==p[j-2]) && p[j-1]=='*'))
                    dp[i][j]=1;
                else if(i>0 && j>0 && dp[i-1][j-1] && (p[j-1]=='.' || s[i-1]==p[j-1]))
                    dp[i][j]=1;
                else if(j>0 && dp[i][j-1] && p[j-1]=='*')
                    dp[i][j]=1;
                else if(j>1 && dp[i][j-2] && p[j-1]=='*')
                    dp[i][j]=1;
            }
        }
        return dp[m][n];
        
    }
};
