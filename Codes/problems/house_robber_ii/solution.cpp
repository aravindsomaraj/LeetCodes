class Solution {
public:
    void Solve(vector<int>& nums, int i, vector<int>& dp)
    {
        if(i<0)
            return;
        
        
        dp[i] = max(dp[i+2]+nums[i], dp[i+1]);
        Solve(nums,i-1,dp);
        
    }
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> dp (n+1,0);
        
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        dp[n-1]=nums[n-1];
        
        Solve(nums,n-2,dp);
        int val1 = dp[1];
        
        dp[n-2]=nums[n-2];
        dp[n-1]=0;
        Solve(nums,n-3,dp);
        int val2 = dp[0];
        
        return max(val1,val2);
        
        
    }
};