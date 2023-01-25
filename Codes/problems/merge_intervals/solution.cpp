class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inte) {

        vector<vector<int>> ans;
        sort(inte.begin(),inte.end());
        for(int i=1;i<inte.size();i++)
        {
            if(inte[i][0]>inte[i-1][1])
                ans.push_back(inte[i-1]);
            else
            {
                inte[i][0]=inte[i-1][0];
                if(inte[i][1]<inte[i-1][1])
                    inte[i][1]=inte[i-1][1];
            }
        }
        ans.push_back(inte[inte.size()-1]);
        return ans;
    }
};