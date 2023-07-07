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
        if(target < 0 || i==candidates.size()) return;

        solve(temp,i+1,candidates,target);
        temp.push_back(candidates[i]);
        solve(temp,i,candidates,target-candidates[i]);
        temp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        solve({},0,candidates,target);
        return ans;
    }
};
