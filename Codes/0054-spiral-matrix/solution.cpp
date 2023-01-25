class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int m=matrix.size();int n=matrix[0].size();
        int l=0,r=n-1,u=0,d=m-1;
        int dir=0;int i=0,j=0;
        vector<int> ans;
        while(l<=r&&u<=d)
        {
            if(dir%4==0)
            {
                for(j=l;j<=r;j++)   ans.push_back(matrix[u][j]);
                u++;
            }
            else if(dir%4==1)
            {
                for(i=u;i<=d;i++)   ans.push_back(matrix[i][r]);
                r--;
            }
            else if(dir%4==2)
            {
                for(j=r;j>=l;j--)   ans.push_back(matrix[d][j]);
                d--;
            }
            else if(dir%4==3)
            {
                for(i=d;i>=u;i--)   ans.push_back(matrix[i][l]);
                l++;
            }
            dir++;
        }
        return ans;
    }
};
