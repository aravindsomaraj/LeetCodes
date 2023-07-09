class Solution {
public:
    bool solve(int n, vector<int>& memo)
    {
        if(n<0) return false;
        
        if(memo[n]!=-1) return memo[n];

        return memo[n]=(!solve(n-1,memo) || !solve(n-2,memo) || !solve(n-3,memo));
    }
    bool canWinNim(int n) {

        if(n >= 1348820) return n%4 != 0;
        vector<int> memo (n+1,-1);
        if(n!=0) memo[0] = 0;
        for(int i=1;i<min(4,n);i++) memo[i] = 1;
        return solve(n,memo);
    }
};