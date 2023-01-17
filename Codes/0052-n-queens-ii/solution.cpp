class Solution {
public:
    string ss;
    bool check(vector<string>& res, int i, int j, int n)
    {
        int r=i-1,c=j-1;
        while(r>=0 && c>=0)
        {
            if(res[r][c]=='Q')
                return false;
            r--;c--;
        }
        r=i-1;c=j+1;
        while(r>=0 && c<n)
        {
            if(res[r][c]=='Q')
                return false;
            r--;c++;
        }
        return true;
    }
    bool Solve(vector<vector<string>>& ans, vector<string>& res, string& s, vector<int>& col, int idx)
    {
        if(idx==col.size())
            return true;
        int n=col.size();
        for(int i=0; i<n; i++)
        {
            s=ss;
            // cout << "helo";
            if(!col[i] && check(res,idx,i,n))
            {
                s[i]='Q';
                col[i]=1;
                res.push_back(s);
                bool var=Solve(ans,res,s,col,idx+1);
                if(var)
                {
                    ans.push_back(res);
                }
                s[i]='.';
                col[i]=0;
                res.pop_back();
            }
        }
        return false;
    }
    int totalNQueens(int n) {

        vector<vector<string>> ans;
        vector<int> col (n,0);
        
        vector<string> res;
        string s(n,'.');
        ss=s;
        Solve(ans,res,s,col,0);
        return ans.size();
    }
};
