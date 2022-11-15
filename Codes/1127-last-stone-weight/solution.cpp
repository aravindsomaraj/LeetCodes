class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        int k = stones.size()-1;
        
        while(k>0)
        {
            sort(stones.begin(), stones.end());
            int a = stones[k];
            int b = stones[k-1];
            
            if(a!=b)
            {
                stones[k-1] = abs(a-b);
                k--;
            }
            else
                k-=2;
            
        }
        
        if(k==0)
            return stones[0];
        else
            return 0;
        
        
    }
};
