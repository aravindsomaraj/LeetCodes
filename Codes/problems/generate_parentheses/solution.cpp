class Solution {
public:
    void Solve(int n, string s, int i, int j, vector<string>& ans)
    {
        if(i==n)
        {
            while(s.size()!=2*n)
            {
                s = s + ")";
            }
            ans.push_back(s);
            return;
        }
        if(j>i)
            return ;
        
        Solve(n,s+"(",i+1,j,ans);
        Solve(n,s+")",i,j+1,ans);
        
        
    }
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        Solve(n,"",0,0,ans);
        return ans;
        
    }
};