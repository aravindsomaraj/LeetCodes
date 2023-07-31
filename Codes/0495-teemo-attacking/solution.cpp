class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {

        int tot = 0, n=timeSeries.size();
        int curr_end = -1e5;
        for(int i=0;i<n;i++)
        {
            if(timeSeries[i]<=curr_end)
            {
                tot -= curr_end - timeSeries[i] + 1;
            }
            curr_end = timeSeries[i] + duration - 1;
            tot += duration;
        }
        return tot;
    }
};
