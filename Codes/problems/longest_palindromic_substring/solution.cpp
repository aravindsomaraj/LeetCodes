class Solution {
public:
    string Solve(string s, int start, int end, vector<vector<int>>& dp);
    string longestPalindrome(string s) {
        
        int n = s.size();
        vector<vector<int>> dp (n,vector<int> (n,0));
        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;
        }
        
        return Solve(s,dp);
    }
    
    string Solve(string s, vector<vector<int>>& dp)
    {
        int maxl=1;
        int maxs=0;
        for(int end=0;end<s.size();end++)
        {
            for(int start=end-1;start>=0;start--)
            {
                if(s[start]==s[end] && (dp[start+1][end-1] || start+1==end))
                {
                    dp[start][end]=1;
                    if((end-start+1)>maxl)
                    {
                        maxl=end-start+1;
                        maxs=start;
                    }
                }
            }
        }
        
        string newstr = s.substr(maxs,maxl);
        return newstr;
    }
};