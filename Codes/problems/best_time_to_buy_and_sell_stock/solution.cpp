class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minB=10001,maxS=-1,maxP=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<minB)
            {
                minB = prices[i];maxS=-1;
            }
            else if(maxS<prices[i])
            {    maxS = prices[i];maxP=max(maxP,maxS - minB);}
            
        }
        return maxP;
    }
};