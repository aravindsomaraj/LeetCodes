class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int abc = strs[0].size();
        for(int i=1; i<strs.size(); i++)
        {
            int j=0;
            while(j<strs[i].size() && j<strs[0].size() && strs[i][j]==strs[0][j])
            {
                j++;
            }
            abc = min(abc, j);
        }
        
        return strs[0].substr(0,abc);
        
    }
};