class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int imax,imin,ans;
        imax = imin = ans = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            auto candidates = {nums[i],imax*nums[i],imin*nums[i]};
            imax = max(candidates);
            imin = min(candidates);

            ans = max(imax,ans);
        }
        return ans;
    }
};
