class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int x = 0;int i=0;
        for(i=0; i<nums.size();i++)
        {
            x = x ^ i ^ nums[i];
        }
        x ^= i;
        return x;
    }
};
