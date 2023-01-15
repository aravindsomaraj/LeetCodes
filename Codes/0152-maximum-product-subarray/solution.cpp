class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int p = nums[0];
        int imax = p, imin = p;

        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]<0)
                swap(imax,imin);

            imax = max(nums[i],nums[i]*imax);
            imin = min(nums[i],nums[i]*imin);

            p = max(p,imax);
        }
        return p;
    }
};
