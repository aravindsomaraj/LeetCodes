class Solution {
public:
    int m,n;
    void Solve(vector<vector<int>>& board)
    {
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                int count=0;
                for(int I=max(i-1,0);I<min(i+2,m);I++)
                    for(int J=max(j-1,0);J<min(j+2,n);J++)
                        count += board[I][J] & 1;   // if 2, means 0. if 3, means 1. hence "&1".
                if(count == 3 || (count-board[i][j])==3)
                    board[i][j] |= 2;     // 0 to be changed to 1 => stored as 2 . else 0
                                          // 1 to be retained     => stored as 3 . else 1
            }
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                board[i][j] >>= 1;

    }
    void gameOfLife(vector<vector<int>>& board) {
        m = board.size(), n=board[0].size();

        Solve(board);
    }
};
