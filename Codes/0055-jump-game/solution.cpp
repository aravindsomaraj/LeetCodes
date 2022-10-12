class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> dp (n,0);
        dp[n-1]=1;
        
        Solve(nums,dp,n-1);
        
        return dp[0];
        
    }
    
    void Solve(vector<int>& nums, vector<int>& dp, int i)
    {
        if(i<0)
            return ;
        
        for(int j=i+1;j<=i+nums[i];j++)
        {
            if(j<nums.size() && dp[j])
            {
                
                dp[i]=1;
                break;
            }
            
        }
        cout << dp[i];
        Solve(nums,dp,i-1);
        
    }
};
