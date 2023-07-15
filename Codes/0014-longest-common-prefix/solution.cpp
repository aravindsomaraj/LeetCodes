class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        std::ios_base::sync_with_stdio(NULL);
        std::cin.tie(NULL);
        int m = strs.size();
        int n = strs[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(strs[j][i]=='\0' || strs[0][i]!=strs[j][i])
                    return strs[0].substr(0,i);
            }
        }
        return strs[0];
    }
};
