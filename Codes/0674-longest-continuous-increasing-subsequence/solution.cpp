class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int curr=1,ans=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] <= nums[i-1]) 
            {
                ans = max(ans,curr);
                curr = 0;
            }
            curr++;
        }
        return max(ans,curr);
    }
};
