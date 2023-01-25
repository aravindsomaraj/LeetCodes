class Solution {
public:
    void Solve(vector<vector<int>>& m, int i, int j)
    {
        if(i==m.size() || j==m[0].size())
            return;
        
        int f=0;
        if(!m[i][j])
            f=1;
        
        if(j==m[0].size()-1)
            Solve(m,i+1,0);
        else
            Solve(m,i,j+1);

        if(f==1)
        {
            for(int k=0;k<m.size();k++)
            {
                m[k][j]=0;
            }
            for(int k=0;k<m[0].size();k++)
            {
                m[i][k]=0;
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {

        Solve(matrix,0,0);
        
    }
};