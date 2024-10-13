class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l = nums.size();
        int prod1 = nums[l-1]*nums[l-2]*nums[l-3];
        int prod2 = nums[0]*nums[1]*nums[2];
        int prod3 = nums[0]*nums[1]*nums[l-1];
        return max({prod1,prod2,prod3});
    }
};
