class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n = strs[0].size();
        int m = strs.size();
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(strs[0][i]!=strs[j][i])
                    return strs[0].substr(0,i);
            }
        }
        return strs[0];
    }
};
