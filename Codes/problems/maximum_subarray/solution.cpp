class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int start=0,curr=0,end=0;
        int max_sum = nums[0];
        for(int i=0;i<nums.size();i++)
        {
            curr += nums[i];
            max_sum = max(max_sum,curr);
            if(curr < 0) curr = 0;
            cout << curr << " ";
        }
        return max_sum;
    }
};