class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int curBuy=INT_MAX, curPro=INT_MIN;
        for(int& i:prices)
        {
            if(i<curBuy)
            {
                curBuy=i;
            }
            if((i-curBuy)>curPro)
                curPro=i-curBuy;
        }
        return curPro;
    }
};
