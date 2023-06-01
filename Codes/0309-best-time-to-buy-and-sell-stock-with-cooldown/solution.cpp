class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = -prices[0];
        int sell= buy + prices[0];
        int presell=0;
        for(int& i:prices)
        {
            buy = max(buy,presell-i);
            presell=sell;
            sell= max(sell,buy+i);
        }
        return sell;

    }
};
