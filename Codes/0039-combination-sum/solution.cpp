class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> temp, int i, vector<int>& candidates, int target)
    {
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }
        if(target < 0) return;

        for(int j=i;j<candidates.size();j++)
        {
            temp.push_back(candidates[j]);
            solve(temp,j,candidates,target-candidates[j]);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        solve({},0,candidates,target);
        return ans;
    }
};
