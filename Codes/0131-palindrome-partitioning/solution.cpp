class Solution {
public:
    bool isPalin(string& s, int l, int r)
    {
        while(l<r)
        {
            if(s[l++]!=s[r--])
                return false;
        }
        return true;
    }
    void partition(string& s, int start, vector<string>& temp, vector<vector<string>>& ans)
    {
        int n = s.size();
        if(start==n)
        {
            ans.push_back(temp);
            return;
        }

        for(int i=start; i<n; i++)
        {
            if(isPalin(s,start,i))
            {
                temp.push_back(s.substr(start,i-start+1));
                partition(s,i+1,temp,ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {

        vector<vector<string>> ans;
        vector<string> temp;
        partition(s,0,temp,ans);
        return ans;
        
    }
};
