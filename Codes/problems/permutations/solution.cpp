class Solution {
public:
    vector<vector<int>> ans;
    void Solve(vector<int>& nums, int i)
    {
        if(i==nums.size())
        {
            ans.push_back(nums);return;
        }
        
        for(int j=i;j<nums.size();j++)
        {
            swap(nums[i],nums[j]);
            Solve(nums,i+1);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        Solve(nums,0);
        return ans;
    }
};