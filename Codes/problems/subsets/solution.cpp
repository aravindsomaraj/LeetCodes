class Solution {
public:
    void Solve(vector<int>& nums, int i, vector<vector<int>>& ans, vector<int> res)
    {
        if(i==nums.size())
        {
            ans.push_back(res);
            return;
        }
        
        Solve(nums,i+1,ans,res);
        res.push_back(nums[i]);
        Solve(nums,i+1,ans,res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> res;
        
        Solve(nums,0,ans,res);
        
        return ans;
    }
};