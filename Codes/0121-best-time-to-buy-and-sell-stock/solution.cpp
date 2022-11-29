class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buy = INT_MAX;
        int sell=0;
        int curr=0;
        int n = prices.size();
        
        for(int i=0;i<n;i++)
        {
            if(prices[i]<buy)
                buy=prices[i];
            
            curr=prices[i]-buy;
            if(curr>sell)
                sell=curr;
        }
        return sell;
    }
};
