class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int m = matrix.size();int n=matrix[0].size();
        int l=0,u=0,r=n-1,d=m-1,i=0,dir=0;
        vector<int> ans;
        while(l<=r&&u<=d)
        {
            switch(dir%4)
            {
                case 0: for(i=l;i<=r;i++) ans.push_back(matrix[u][i]); u++; break;
                case 1: for(i=u;i<=d;i++) ans.push_back(matrix[i][r]); r--; break;
                case 2: for(i=r;i>=l;i--) ans.push_back(matrix[d][i]); d--; break;
                case 3: for(i=d;i>=u;i--) ans.push_back(matrix[i][l]); l++; break;
            }
            dir++;
        }
        return ans;
    }
};
