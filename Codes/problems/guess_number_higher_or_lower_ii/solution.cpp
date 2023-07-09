vector<vector<int>> dp(201, vector<int>(201, -1));

class Solution {
public:
    int getMoneyAmount(int l, int r) {
        if(l >= r) {
            return 0;
        }
        if(l + 1 == r) {
            return l;
        }
        if(dp[l][r] == -1) {
            int minCost = INT_MAX;
            for(int guess = l; guess <= r; guess++) {
                minCost = min(minCost, guess + max(getMoneyAmount(l, guess - 1), getMoneyAmount(guess + 1, r)));
            }
            dp[l][r] = minCost;
        }
        return dp[l][r];
    }

    int getMoneyAmount(int n) {
        return getMoneyAmount(1, n);
    }
};