class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ret;
        for(int i=1;i<=numRows;i++)
        {
            vector<int> res (i,1);
            for(int j=1;j<i-1;j++)
            {
                res[j] = ret[i-2][j] + ret[i-2][j-1]; 
            }
            ret.push_back(res);
        }
        return ret;
    }
};