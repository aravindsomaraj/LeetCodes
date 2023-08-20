class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> mat (n,vector<int>(n,0));
        int l=0,r=n-1,u=0,d=n-1,dir=0,i;
        int count = 1;
        while(l<=r && u<=d)
        {
            switch(dir%4)
            {
                case 0: for(i=l;i<=r;i++) mat[u][i] = count++; u++; break;
                case 1: for(i=u;i<=d;i++) mat[i][r] = count++; r--; break;
                case 2: for(i=r;i>=l;i--) mat[d][i] = count++; d--; break;
                case 3: for(i=d;i>=u;i--) mat[i][l] = count++; l++; break;
            }
            dir++;
        }
        return mat;
    }
};