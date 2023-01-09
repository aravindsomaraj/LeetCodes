class Solution {
public:
    int getVal(vector<vector<int>>& board, int i, int j, int m, int n)
    {
        int curr = board[i][j];
        int ones=0;

        if(m==1&&n==1)
            return 0;
        else if(m==1)
        {
            cout << "hi";
            if(curr==1 && j!=0 && j!=(n-1) && board[i][j-1]==1&&board[i][j+1]==1)
                return 1;
            return 0;        
        }
        else if(n==1)
        {
            if(curr==1 && i!=0 && i!=(m-1) && board[i-1][j]==1&&board[i+1][j]==1)
                return 1;
            return 0;        
        }
        if(i==0&&j==0)
            ones+=board[0][1]+board[1][1]+board[1][0];
        else if(i==m-1&&j==0)
            ones+=board[m-2][1]+board[m-1][1]+board[m-2][0];
        else if(i==0&&j==n-1)
            ones+=board[0][n-2]+board[1][n-2]+board[1][n-1];
        else if(i==m-1&&j==n-1)
            ones+=board[m-2][n-1]+board[m-1][n-2]+board[m-2][n-2];
        // cout << ones << endl;
        else if(i==0)
            ones+=board[i][j-1]+board[i][j+1]+board[i+1][j-1]+board[i+1][j+1]+board[i+1][j];
        else if(i==m-1)
            ones+=board[i][j-1]+board[i][j+1]+board[i-1][j-1]+board[i-1][j+1]+board[i-1][j];
        else if(j==n-1)
            ones+=board[i-1][j]+board[i+1][j]+board[i-1][j-1]+board[i+1][j-1]+board[i][j-1];
        else if(j==0)
            ones+=board[i-1][j]+board[i+1][j]+board[i-1][j+1]+board[i+1][j+1]+board[i][j+1];
        else
            ones+=board[i-1][j-1]+board[i-1][j]+board[i-1][j+1]+board[i][j-1]+board[i][j+1]+board[i+1][j-1]+board[i+1][j]+board[i+1][j+1];

        if(curr==1)
        {
            if(ones<2 || ones>3)
                return 0;
            else 
                return 1;
        }
        else
        {
            if(ones==3)
                return 1;
            else
                return 0;
        }
        
    }
    void Solve(vector<vector<int>>& board, int i, int j, int m, int n)
    {

        if(i==m)
            return;
        
        int val=0;
        if(j==n)
        {
            Solve(board,i+1,0,m,n);
        }
        else
        {
            val = getVal(board,i,j,m,n);
            Solve(board,i,j+1,m,n);
            board[i][j]=val;
        }
        
    }
    void gameOfLife(vector<vector<int>>& board) {

        Solve(board,0,0,board.size(),board[0].size());
        
    }
};