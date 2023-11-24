class Solution {
public:
    int maxCoins(vector<int>& piles) {

        int n = piles.size();
        sort(piles.begin(),piles.end());
        int l = 0, r = n-1, ans = 0;
        while(l<=r)
        {
            ans += piles[r-1];
            r = r - 2;
            l = l+1;
        }
        return ans;
    }
};
