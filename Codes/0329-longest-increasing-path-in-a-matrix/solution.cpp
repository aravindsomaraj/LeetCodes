class Solution {
public:
    int m,n;
    int Solve(vector<vector<int>>& matrix, int i, int j, int prev, vector<vector<int>>& memo)
    {
        if(i<0 || j<0 || i==m || j==n || matrix[i][j]<=prev)
            return 0;
        
        if(memo[i][j]!=-1)
            return memo[i][j];
        
        prev = matrix[i][j];
        return memo[i][j] = 1 + max({Solve(matrix,i-1,j,prev,memo),Solve(matrix,i+1,j,prev,memo),Solve(matrix,i,j-1,prev,memo),Solve(matrix,i,j+1,prev,memo)});
        
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        m=matrix.size();
        n=matrix[0].size();
        vector<vector<int>> memo (m,vector<int>(n,-1));
        
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans = max(ans,Solve(matrix,i,j,-1,memo));
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout << memo[i][j] << " ";
            }
            cout << endl;
        }
        return ans;
    }
};
