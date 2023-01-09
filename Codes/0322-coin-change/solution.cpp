class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

        int n = coins.size();
        vector<int> dp (amount+1,INT_MAX-1);
        vector<int> dpf (amount+1,0);
        dp[0]=0;
        dpf[0]=1;

        for(int i=0; i<n; i++)
        {
            for(int k=coins[i]; k<=amount; k++)
            {
                if(dpf[k-coins[i]])
                {
                    dp[k] = min(1+dp[k-coins[i]],dp[k]);
                    dpf[k]=1;
                }
            }
        }
        if(dpf[amount])
            return dp[amount];
        return -1;
    }
};
