class Solution {
    int dp[31][30][30];
public:
    bool isScramble(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size();
        //given that n1 == n2
        memset(dp, -1, sizeof dp);
        for(int l = 1; l<=n1; l++) {
            for(int i = 0; i<=n1-l; i++) {
                for(int j = 0; j<=n2-l; j++) {
                    if(l == 1) {
                        dp[l][i][j] = s1[i] == s2[j];
                        continue;
                    }
                    dp[l][i][j] = 0;
                    for(int k = 1; k<l; k++) {
                        if((dp[k][i][j] && dp[l-k][i+k][j+k]) ||
                        (dp[k][i][j+l-k] && dp[l-k][i+k][j])) 
                            dp[l][i][j] = 1;
                    }
                }
            }
        }
        return dp[n1][0][0];
    }
};
