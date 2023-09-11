class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = -prices[0];
        int sell = buy + prices[0];
        for(int& i:prices)
        {
            buy = max(buy,-i);
            sell = max(sell,buy+i);
        }
        return sell;
    }
};
