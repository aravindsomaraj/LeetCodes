class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
        int sum = 0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i] == 0 & (i==0 || v[i-1] == 0) && (i==v.size()-1 || v[i+1] == 0))
            {
                v[i] = 1;
                sum++;
            }
        }
        return sum>=n;
    }
};
