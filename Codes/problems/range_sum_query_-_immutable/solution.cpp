class NumArray {
public:
    vector<int> dp;
    NumArray(vector<int>& nums) {
        dp.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            dp.push_back(dp.back()+nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
        
        return dp[right] - (left==0? 0 : dp[left-1]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */