class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int ans = strs[0].size();
        for(string& s:strs)
        {
            int j=0;
            for(j=0;j<s.size()&&strs[0][j]==s[j];j++)
            {

            }
            ans=min(ans,j);
        }
        return strs[0].substr(0,ans);
    }
};
