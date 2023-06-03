class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
       int n = s.size();
       vector<bool> dp(n+1,false);

       dp[0] = true;
       for(int i=0;i<n;i++)
       {
            if(dp[i]) for(auto str:wordDict)
                if(s.substr(i,str.size())==str) dp[i+str.size()] = true;
       }
       return dp[n];
    }
};
