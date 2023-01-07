class Solution {
public:
    int countPrimes(int n) {

        int ans=0;
        vector<int> dp (n,0);
        for(int i=2; i<n; i++)
        {
            if(dp[i])
                continue;
            ans++;
            for(long j=(long)i*(long)i; j<n; j+=i)
            {
                dp[j]=1;
            }
        }

        return ans;

        
        
    }
};