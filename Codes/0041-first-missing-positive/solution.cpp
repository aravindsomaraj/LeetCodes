class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int n = nums.size();

        for(int i=0;i<n;i++)
        {
            while(nums[i]!=i+1 && (nums[i]<=n && nums[i]>0))
            {
                if(nums[i]==nums[nums[i]-1]) break;
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        
        int k=1;
        for(int& i:nums)
        {
            if(k!=i) return k;
            else k++;
        }
        return k;
    }
};
