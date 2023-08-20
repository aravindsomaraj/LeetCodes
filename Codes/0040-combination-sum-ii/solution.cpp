class Solution {
public:
vector<vector<int>> ans;
vector<int> res;
    void helper(vector<int>& nums, int target, int i)
    {
        if(target==0)
        {
            ans.push_back(res);
            return;
        }

        for(int j=i;j<nums.size();j++)
        {
            if(nums[i] > target) continue;
            if(j && nums[j]==nums[j-1] && j>i) continue;  // to check for duplicates
            res.push_back(nums[j]);
            helper(nums,target-nums[j],j+1);
            res.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        res={};
        helper(nums,target,0);
        return ans;
    }
};
