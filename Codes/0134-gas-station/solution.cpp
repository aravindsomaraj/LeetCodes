class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int n = gas.size();
        int start=0,tot=0,tank=0;
        for(int i=0; i<n; i++)
        {
            tot+=gas[i]-cost[i];
            tank+=gas[i]-cost[i];
            if(tank<0)
            {
                tank=0;
                start=i+1;
            }
        }

        if(tot<0)
            return -1;
        else
            return start;
        
    }
};
