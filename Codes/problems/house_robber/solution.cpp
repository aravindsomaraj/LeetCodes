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
        
        vector<int> dp (nums.size()+1, 0);
    
        if(nums.size()==0)
            return 0;
        
        dp[nums.size()-1]=nums[nums.size()-1];
        Solve(nums,nums.size()-2,dp);
        
        return dp[0];
        
    }
};