class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int n = nums.size();
        int totals = (n*(n+1))/2;
        for(int &i:nums) sum+=i;
        for(int i=0;i<n-1;i++) if(nums[i]==nums[i+1]) return {nums[i],totals-sum+nums[i]};
        return {};
    }
};
