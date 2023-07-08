class Solution {
public:
    unordered_map<char,string> mp;
    vector<string> solve(string s, int i)
    {
        if(i==s.size()) return {""};

        vector<string> temp = solve(s,i+1);
        string res = mp[s[i]];
        vector<string> ans;
        for(int i=0;i<res.size();i++)
        {
            for(int j=0;j<temp.size();j++)
            {
                ans.push_back(res[i]+temp[j]);
            }
        }
        return ans;
    }
    vector<string> letterCombinations(string digits) {

        if(digits=="")
            return {};
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        return solve(digits,0);
    }
};