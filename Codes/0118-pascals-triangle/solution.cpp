class Solution {
public:
    void Solve(vector<vector<int>>& ans, int n, int i)
    {
        if(i>n)
            return;
        
        vector<int> res;
        res.push_back(1);
        for(int j=0;j<ans[i-2].size()-1;j++)
        {
            res.push_back(ans[i-2][j]+ans[i-2][j+1]);
        }
        res.push_back(1);
        ans.push_back(res);
        Solve(ans,n,i+1);
    }
    vector<vector<int>> generate(int numRows) {
     
        vector<vector<int>> ans;
        ans.push_back({1});
        if(numRows==1)
            return ans;
        ans.push_back({1,1});
        if(numRows==2)
            return ans;
        
        Solve(ans,numRows,3);
        return ans;
    }
};
