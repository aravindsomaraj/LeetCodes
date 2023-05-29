class Solution {
public:
    vector<string> ans;
    void Solve(int i, int n, string s)
    {
        if(2*i < s.size())
            return;
        if(i==n)
        {
            while(s.size()<(2*n)) s=s+")";
            ans.push_back(s);
            return;
        }

        Solve(i+1,n,s+"(");
        Solve(i,n,s+")");
    }
    vector<string> generateParenthesis(int n) {
        Solve(0,n,"");
        return ans;
    }
};
