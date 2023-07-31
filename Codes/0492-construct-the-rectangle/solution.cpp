class Solution {
public:
    vector<int> constructRectangle(int area) {

        int end = (int)ceil(sqrt(area));
        int start=area,rstart=0,d=INT_MAX;
        vector<int> ans;
        while(start>=end)
        {
            if(area%start!=0) 
            {
                start--;continue;
            }
            cout << start << endl;
            rstart = area/start;
            if(start-rstart < d)
            {
                ans = {start,rstart};
                d = start-rstart;
            }
            start--;
        }
        return ans;
    }
};
