int helper(int i, int j, int m, int n, int M[100][100]) // no:of ways to get from (i,j) to target
{
    if(i==m || j==n) return 0; // out of bounds checking

    if(i==m-1 && j==n-1) return 1; // goal state checking

    if(M[i][j]!=-1) return M[i][j]; //value exists, then return

    M[i][j] = helper(i,j+1,m,n,M)+helper(i+1,j,m,n,M); //recursive formula
    return M[i][j];
}
int uniquePaths(int m, int n){
    int M[100][100];

    for(int i=0;i<100;i++) for(int j=0;j<100;j++) M[i][j]=-1;
    
    return helper(0,0,m,n,M);
}











// int mm,nn;
// int helper(int i, int j, int M[][nn])
// {
//     if(M[i][j]!=-1) return M[i][j];    
// }
// int uniquePaths(int m, int n){
//     mm=m; nn=n;
//     int M[m][n];
//     for(int i=0;i<m;i++) for(int j=0;j<n;j++) M[i][j] = -1;

// }
