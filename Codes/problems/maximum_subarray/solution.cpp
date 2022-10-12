class Solution {
public:
    int maxSubArray(vector<int>& A) {
        
        int n = A.size();
        int dp[n];//dp[i] means the maximum subarray ending with A[i];
        dp[0] = A[0];
        int maxx = dp[0];
        
        for(int i = 1; i < n; i++){
            dp[i] = A[i] + (dp[i - 1] > 0 ? dp[i - 1] : 0);
            maxx = max(maxx, dp[i]);
        }
        
        return maxx;
        
    }
};