class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> temp (nums);
        sort(nums.begin(),nums.end());
        int n = nums.size();
        auto it = find(temp.begin(),temp.end(),nums[n-1]);
        int ans = distance(temp.begin(),it);
        return nums[n-1] >= (2*nums[n-2]) ? ans : -1;
    }
};
