class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy1 = -prices[0];          // like current buy -
        int sell1= buy1 + prices[0];                 // sell pair
        int buy2 = sell1 - prices[0];   // like overall buy -
        int sell2= buy2 + prices[0];                // sell pair

        for(int& i:prices)
        {
            buy1 = max(buy1,-i);
            sell1= max(sell1,buy1+i);
            buy2 = max(buy2,sell1-i);
            sell2= max(sell2,buy2+i);
        }
        return max(sell1,sell2);
    }
};