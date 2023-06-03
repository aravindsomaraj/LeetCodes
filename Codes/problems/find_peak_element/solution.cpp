class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,r=nums.size()-1;

        while(l<=r)
        {
            int mid = (l+r)/2;
            if((mid==r || mid<r && nums[mid]>nums[mid+1]) && (mid==l || mid>l && nums[mid]>nums[mid-1]))
                return mid;
            else if(nums[mid]<nums[mid+1])
                l=mid+1;
            else
                r=mid-1;
        }
        return 0;
    }
};