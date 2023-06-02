class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int _gas=accumulate(gas.begin(),gas.end(),0);
        int _cost=accumulate(cost.begin(),cost.end(),0);
        if(_gas<_cost) return -1;
        
        int n=gas.size(),start=0,curr=0;
        for(int i=0;i<n;i++)
        {
            curr += gas[i]-cost[i];
            if(curr<0)
            {
                curr=0;
                start=i+1;
            }
        }
        return start;
    }
};