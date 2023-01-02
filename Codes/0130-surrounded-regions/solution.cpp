class Solution {
public:
    void dfs(vector<vector<char>>& board, int i, int j)
    {
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]=='V' || board[i][j]=='X')
            return;

        
        board[i][j]='V';
        dfs(board,i-1,j);
        dfs(board,i+1,j);
        dfs(board,i,j-1);
        dfs(board,i,j+1);

    }
    void solve(vector<vector<char>>& board) {

        int m = board.size();
        int n = board[0].size();

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i*j==0 || i==m-1 || j==n-1)
                {
                    if(board[i][j]=='O')
                        dfs(board,i,j);
                }
            }
        }

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(board[i][j]=='O')
                    board[i][j]='X';
                else if(board[i][j]=='V')
                    board[i][j]='O';
            }
        }
        
    }
};
