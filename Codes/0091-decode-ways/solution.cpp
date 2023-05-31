/*
    --- TOP DOWN APPROACH  ---  USING MEMOIZATION -----
*/
class Solution {
public:
    int n;
    int solve(vector<int>& mem, int i, string s)
    {
        if(i==n)
            return 1;
        
        if(mem[i]) return mem[i];
        int ans=0;
        if(s[i]!='0') ans = solve(mem,i+1,s);
        if(i+1<n && (s[i]=='1' || s[i]=='2' && s[i+1]<='6'))
            ans += solve(mem,i+2,s);
        return mem[i]=ans;
    }
    int numDecodings(string s) {
        n=s.size();
        vector<int> mem (n,0);
        return solve(mem,0,s);
    }
};


/**
    ----- BOTTOM UP APPROACH   --- USING TABULATION  -----
class Solution {    
public:
    int numDecodings(string s) {
        if(s[0]=='0') return 0;
        int n=s.size();

        vector<int> dp (n,0);   // i'th value = Possible decodes of [0...i]th string

        dp[0]=1;
        for(int i=1;i<n;i++)
        {
            if(s[i]!='0') 
                dp[i]=dp[i-1];
            if(s[i-1]=='1' || s[i-1]=='2' && s[i]<='6')
                dp[i]+=i>1?dp[i-2]:1;
        }
        return dp[n-1];
    }
};
**/
