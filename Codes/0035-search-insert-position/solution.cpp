class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        auto it = lower_bound(nums.begin(),nums.end(),target);
        return distance(nums.begin(),it);
        
    }
};
