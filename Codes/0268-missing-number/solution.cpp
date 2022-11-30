class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        int k=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]!=k)
                return k;
            k++;
        }
        return k;
    }
};
