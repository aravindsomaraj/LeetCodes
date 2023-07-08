class Solution {
public:
    int sum;
    vector<vector<int>> dp;
    bool helper(vector<int>& nums, int i, int sum1)
    {
        if(i==nums.size()) return false;

        if(dp[i][sum1]!=-1) return dp[i][sum1];
        if(2*(sum1+nums[i]) == sum) return dp[i][sum1+nums[i]] = true;

        return dp[i][sum1] = helper(nums,i+1,sum1) || helper(nums,i+1,sum1+nums[i]);
    }
    bool canPartition(vector<int>& nums) {

        sum = accumulate(nums.begin(),nums.end(),0);
        dp = vector<vector<int>>(nums.size(),vector<int>(sum+1,-1));
        return sum&1? 0 : helper(nums,0,0);
    }
};
