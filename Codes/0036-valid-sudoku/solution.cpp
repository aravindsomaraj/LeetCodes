class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<vector<int>> row (9,vector<int> (9,0));
        vector<vector<int>> col (9,vector<int> (9,0));
        vector<vector<int>> blk (9,vector<int> (9,0));

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                    continue;
                
                int n=board[i][j]-'1';

                if(row[n][i] || col[n][j] || blk[n][(j/3+3*(i/3))])
                    return false;
                
                row[n][i] = col[n][j] = blk[n][(j/3+3*(i/3))] = 1;
            }
        }
        return true;
    }
};
