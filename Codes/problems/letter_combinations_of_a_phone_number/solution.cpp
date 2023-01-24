class Solution {
public:
    unordered_map<int,vector<string>> mp;
    vector<string> Solve(string& s, int i)
    {
        if(i==s.size())
            return {};
        if(i==s.size()-1)
            return mp[s[i]];

        vector<string> temp = Solve(s,i+1);
        vector<string> res  = mp[s[i]];
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

        mp['2']={"a","b","c"};
        mp['3']={"d","e","f"};
        mp['4']={"g","h","i"};
        mp['5']={"j","k","l"};
        mp['6']={"m","n","o"};
        mp['7']={"p","q","r","s"};
        mp['8']={"t","u","v"};
        mp['9']={"w","x","y","z"};

        return Solve(digits,0);
    }
};