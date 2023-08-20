class Solution {
public:
    // Bottom up tabulation - O(n) 1ms
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int *dp = new int[n];
        for (int i=0; i<n; i++) {
            if (i<2) dp[i] = cost[i];
            else dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }
        return min(dp[n-1], dp[n-2]);
    }
};
