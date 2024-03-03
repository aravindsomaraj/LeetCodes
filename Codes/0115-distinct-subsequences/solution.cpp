class Solution {

    //Memoisation
    int f(int i, int j, string s,string t, vector<vector<int>> dp){
        if(j < 0) return 1;
        if(i < 0) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        int take,nottake =0;
        if(s[i] == t[j]){
            take = f(i-1,j-1,s,t,dp);
            nottake = f(i-1,j,s,t,dp);
            return dp[i][j] = (take+nottake);
        }
        return dp[i][j] = f(i-1,j,s,t,dp);
        


    }

public:
    int mod = 1e9 + 7;
    int numDistinct(string s, string t) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int n = s.length();
        int m = t.length();
        
        //Tabulation
        vector<vector<long long>> dp(n+1, vector<long long>(m+1, 0));
        for(int i =0; i <= n; i++) dp[i][0] = 1;
        for(int j =1; j <=m; j++) dp[0][j] = 0;

        for(int i =1; i <=n; i++){
            for(int j =1; j <=m; j++){
                long long take,nottake =0;
                if(s[i-1] == t[j-1]){
                    dp[i][j] = (dp[i-1][j-1]+dp[i-1][j])%mod;
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }

        // return f(n-1,m-1,s,t,dp);
        return dp[n][m];
    }
};
