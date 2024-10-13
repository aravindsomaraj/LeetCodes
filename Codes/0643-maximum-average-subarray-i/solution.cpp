class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0, l=0, curr=0;
        for(int i=0;i<k;i++) curr += nums[i];
        sum = curr;
        for(int i=k;i<nums.size();i++)
        {
            curr = curr + nums[i] - nums[l++];
            sum = max(sum,curr);
        }
        return (1.0*sum)/k;
    }
};
