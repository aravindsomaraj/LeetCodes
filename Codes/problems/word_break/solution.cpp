class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        int n=s.size();
        vector<int> dp (n+1);
        dp[0] = 1;
        for(int i=0;i<n;i++)
        {
            if(dp[i]) for(string& str:wordDict)
            {
                if(s.substr(i,str.size())==str) dp[i+str.size()] = 1;
            }
        }
        return dp[n];
    }
};