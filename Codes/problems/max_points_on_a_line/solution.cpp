class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {

        int ans=1;
        int n=points.size();

        for(int i=0;i<n-1;i++)
        {
            map<double,int> mp;
            for(int j=i+1;j<n;j++)
            {
                double dx = points[j][0] - points[i][0];
                double dy = points[j][1] - points[i][1];
                if(dx==0)
                    mp[DBL_MAX]++;
                else
                    mp[(dy/dx)]++;
            }
            int temp = 0;
            for(auto& it:mp)
                temp = max(temp,it.second+1);
            ans = max(temp,ans);
        }
        return ans;
    }
};