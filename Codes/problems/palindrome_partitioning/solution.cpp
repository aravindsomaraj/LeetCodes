class Solution {
public:
    vector<vector<string>> ans;
    vector<string> res;
    int n;
    bool isPalin(string& s, int l, int r)
    {
        while(l<r)
        {
            if(s[l++]!=s[r--]) return false;
        }
        return true;
    }
    void Solve(string& s, int idx)
    {
        if(idx==n)
        {
            ans.push_back(res); return;
        }

        for(int i=idx;i<n;i++)
        {
            if(isPalin(s,idx,i))
            {
                res.push_back(s.substr(idx,i-idx+1));
                Solve(s,i+1);
                res.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        n = s.size();
        Solve(s,0);
        return ans;
    }
};