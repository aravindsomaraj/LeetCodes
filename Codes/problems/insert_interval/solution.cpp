class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

        auto it = lower_bound(intervals.begin(),intervals.end(),newInterval);
        int v = distance(intervals.begin(),it);
        cout << v;
        intervals.insert(it,newInterval);
        
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        int j=0;
        for(int i=1;i<intervals.size();i++)
        {
            if(ans[j][1]>=intervals[i][0])
                ans[j][1] = max(intervals[i][1],ans[j][1]);
            else
                ans.push_back(intervals[i]),j++;
        }
        return ans;
    }
};