class Solution {
public:
    string longestPalindrome(string s) {

        int n = s.size();
        vector<vector<int>> dp (n,vector<int>(n,0));

        for(int i=0;i<n;i++) dp[i][i]=1;
        int posn=0,len=1;
        for(int end=0;end<n;end++)
        {
            for(int start=end-1;start>=0;start--)
            {
                if(s[start]==s[end] && (start==end-1 || dp[start+1][end-1]))
                {
                    dp[start][end]=1;
                    if(end-start+1 > len)
                    {
                        posn = start;
                        len = end-start+1;
                    }
                }
            }   
        }
        return s.substr(posn,len);
    }
};
