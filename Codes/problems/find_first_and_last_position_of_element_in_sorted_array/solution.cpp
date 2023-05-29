class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int l=0,r=nums.size()-1;
        int lb=-1,ub=-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==target)
            {
                lb=mid; r=mid-1;
            }
            else if(target<nums[mid]) r=mid-1;
            else l=mid+1;
        }
        l=0;r=nums.size()-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==target)
            {
                ub=mid; l=mid+1;
            }
            else if(target<nums[mid]) r=mid-1;
            else l=mid+1;
        }
        return {lb,ub};
    }
};