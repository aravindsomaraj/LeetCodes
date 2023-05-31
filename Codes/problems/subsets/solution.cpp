class Solution {
public:
    vector<vector<int>> ans;
    void Solve(vector<int>& nums, int i, vector<int> res)
    {
        if(i==nums.size())
        {
            ans.push_back(res); return;
        }

        Solve(nums,i+1,res);
        res.push_back(nums[i]);
        Solve(nums,i+1,res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        Solve(nums,0,{});
        return ans;
    }
};