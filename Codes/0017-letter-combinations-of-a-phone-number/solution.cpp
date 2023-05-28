class Solution {
public:
    unordered_map<char,string> mp;
    vector<string> Solve(string s,int i)
    {
        if(i==s.size()-1)
        {
            vector<string> v;
            for(char& ch:mp[s[i]])
                v.push_back(string(1,ch));
            return v;
        }

        vector<string> temp = Solve(s,i+1);
        vector<string> res;
        for(char& ch:mp[s[i]])
                res.push_back(string(1,ch));
        vector<string> ans;
        for(int i=0;i<temp.size();i++)
        {
            for(int j=0;j<res.size();j++)
            {
                ans.push_back(res[j]+temp[i]);
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
        return Solve(digits,0);
    }
};
