class Solution {
public:
    static bool compare(string a, string b)
    {
        return a+b > b+a;
    }
    string largestNumber(vector<int>& nums) {

        vector<string> s;
        for(int& i:nums) s.push_back(to_string(i));

        sort(s.begin(),s.end(),compare);
        string ans="";
        for(string& num:s) ans+=num;
        return ans[0]=='0'?"0":ans;
    }
};
