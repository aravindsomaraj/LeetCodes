class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> dp (n,0);
        
        Solve(nums,dp,n-2);
        
        return dp[0];
        
    }
    
    void Solve(vector<int>& nums, vector<int>& dp, int i)
    {
        if(i<0)
            return;
        int max=nums.size();
        if(nums[i]==0)
            dp[i]=0;
        else if(i+nums[i]>=nums.size()-1)
            dp[i]=1;
        else
        {
            for(int j=i+1;j<=i+nums[i];j++)
            {

                if(j<nums.size() && dp[j]!=0)
                {
                    // update(); //find min jump to target
                    if((1+dp[j])<max)
                        max=1+dp[j];
                }
            }
            dp[i]=max;

        }
        Solve(nums,dp,i-1);
    }
};
