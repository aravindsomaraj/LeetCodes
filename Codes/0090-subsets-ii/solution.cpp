class Solution {
public:
    void Solve(vector<int>& nums, int i, set<vector<int>>& ans, vector<int> res)
    {
        if(i==nums.size())
        {
            sort(res.begin(),res.end());
            ans.insert(res);
            return;
        }
        
        Solve(nums,i+1,ans,res);
        res.push_back(nums[i]);
        Solve(nums,i+1,ans,res);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        set<vector<int>> ans;
        vector<int> res;
        
        Solve(nums,0,ans,res);
        vector<vector<int>> answ (ans.begin(),ans.end());
        return answ;
        
    }
};
