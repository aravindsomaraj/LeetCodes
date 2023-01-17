class Solution {
public:
    int count(vector<vector<int>>& ma, int x)
    {
        int cnt=0,c=ma[0].size()-1;
        for(int r=0; r<ma.size(); r++)
        {
            while(c>=0 && ma[r][c]>x)
                c--;
            cnt+=(c+1);
        }
        return cnt;
    }
    int kthSmallest(vector<vector<int>>& ma, int k) {

        int m = ma.size();
        int n = ma[0].size();

        int l = ma[0][0],r=ma[m-1][n-1];

        while(l<=r)
        {
            int mid = (l+r)/2;
            if(count(ma,mid)>=k)
            {
                n=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        return n;
    }
};