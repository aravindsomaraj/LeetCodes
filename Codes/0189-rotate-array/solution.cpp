class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        vector<int> numsN (n,0);
        for(int i=0; i<n; i++)
        {
            numsN[(i+k)%n] = nums[i];
        }
        nums = numsN;
        // for(int i=0; i<n; i++)
        // {
        //     nums[i] = numsN[i];
        // }
    }
};
