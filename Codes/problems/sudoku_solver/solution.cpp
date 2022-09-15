class Solution {
public:
    
    bool Solve(vector<vector<char>>& board, int i, int j, vector<vector<int>>& row, vector<vector<int>>& col, vector<vector<int>>& blo)
    {
        if(i==9)
            return true;    
        if(board[i][j]!='.')
        {
            if(j==8)
                return Solve(board,i+1,0,row,col,blo);
            else
                return Solve(board,i,j+1,row,col,blo);
        }
        else
        {
            for(int x=1; x<=9; x++)
            {
                if(row[i][x] && col[x][j] && blo[(i/3)*3+(j/3)][x])
                {
                    board[i][j] = (char)(x+48);
                    row[i][x] = col[x][j] = blo[(i/3)*3+(j/3)][x] = 0;
                    bool var=false;
                    if(j==8)
                        var=Solve(board,i+1,0,row,col,blo);
                    else
                        var=Solve(board,i,j+1,row,col,blo);
                    
                    if(var==true)
                        return true;
                    
                
                    board[i][j] = '.';
                    row[i][x] = col[x][j] = blo[(i/3)*3+(j/3)][x] = 1;
                    
                }
            }
        }
        return false;
        
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        
        vector<int> temp (10,1);
        vector<vector<int>> row (10,temp);
        vector<vector<int>> col (10,temp);
        vector<vector<int>> blo (10,temp);
        
        int t = 0;
        
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9;j++)
            {
                if(board[i][j]=='.')
                    continue;
                
                t = board[i][j]-48;
                
                row[i][t] = col [t][j] = blo[(i/3)*3+(j/3)][t] = 0;
                    
            }
        }
        
        bool p = Solve(board,0,0,row,col,blo);
    }
};