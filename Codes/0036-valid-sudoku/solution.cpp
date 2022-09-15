class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<int> temp (10,1);
        vector<vector<int>> row (10,temp);
        vector<vector<int>> col (10,temp);
        vector<vector<int>> blo (10,temp);
        int t;
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(board[i][j] == '.')
                    continue;
                
                t = board[i][j]-48;
                
                if(row[i][t] && col[t][j] && blo[(i/3)*3+(j/3)][t])
                    row[i][t] = col[t][j] = blo[(i/3)*3+(j/3)][t] = 0;
                else
                    return false;
            }
        }
        
        return true;
        
    }
};
