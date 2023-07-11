class Solution {
public:
    vector<int> getRow(int rowIndex) {

        if(rowIndex==0) return {1};
        if(rowIndex==1) return {1,1};
        vector<int> v {1,1};
        int newprev = 0;
        for(int i=1;i<rowIndex;i++)
        {
            int n = v.size();
            v.push_back(1);
            for(int j=1,prevprev=v[0];j<n;j++)
            {
                newprev = v[j];
                v[j] = v[j] + prevprev;
                prevprev = newprev;
            }
        }
        return v;
    }
};
