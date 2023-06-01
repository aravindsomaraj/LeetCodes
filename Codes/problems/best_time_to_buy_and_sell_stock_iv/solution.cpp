class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<int>> buysell (k, vector<int> (2,0));
        for(int i=0;i<k;i++) buysell[i][0] = -prices[0];
        for(int& i:prices)
        {
            buysell[0][0] = max(buysell[0][0],-i);
            
            buysell[0][1] = max(buysell[0][1],buysell[0][0]+i);
            
            for(int j=1;j<k;j++)
            {
                buysell[j][0] = max(buysell[j][0],buysell[j-1][1]-i);
                buysell[j][1] = max(buysell[j][1],buysell[j][0]+i);
            }
            
        }
        int max_elem=buysell[0][1];
        for(int i=0;i<k;i++)
        {
            max_elem=max(max_elem,buysell[i][1]);
        }
        return max_elem;
    }
};