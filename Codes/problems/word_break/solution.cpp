class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {

        int n = s.size();
        if(n==0)
            return false;

        vector<bool> dp (s.size()+1,false);
        dp[0]=true;
        for(int i=1; i<=n; i++)
        {
            for(int j=i-1; j>=0; j--)
            {
                if(dp[j])
                {
                    string w = s.substr(j,i-j);
                    if(find(wordDict.begin(),wordDict.end(),w)!=wordDict.end())
                    {
                        dp[i]=true;
                        break;      // for next i
                    }
                }
            }
        }

        return dp[n];

        
    }
};