class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> A (amount+1,-1);
        A[0] = 0;
        for(int& i:coins)
        {
            for(int j=i;j<=amount;j++)
            {
                if(A[j-i]!=-1)
                    A[j] = A[j]==-1 ? A[j-i]+1:min(A[j-i]+1,A[j]);
            }
        }
        return A[amount];
    }
};
