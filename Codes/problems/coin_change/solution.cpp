class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        vector<int> dp (amount+1,-1);
        dp[0]=0;

        for(int& i:coins)
        {
            for(int j=i;j<=amount;j++)
            {
                if(dp[j-i]!=-1)
                    dp[j]=dp[j]==-1? dp[j-i]+1 : min(dp[j-i]+1,dp[j]);
            }
        }
        return dp[amount];
    }
};