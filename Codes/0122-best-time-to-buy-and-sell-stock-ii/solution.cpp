class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if(prices.size()==1) return 0;
        int buy = -prices[0];
        int sell = buy + prices[0];

        for(int& i:prices)
        {
            buy = max(buy,sell-i);
            sell= max(sell,buy+i);
        }
        return sell;

        /*
        int profit = 0;
        for(int i = 1; i < size(P); i++)
            if(P[i] > P[i-1])              // yesterday was valley, today is peak
                profit += P[i] - P[i-1];   // buy yesterday, sell today
        return profit;
        */
    }
};
