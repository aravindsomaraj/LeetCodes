class Solution {
public: 
    bool Solve(vector<vector<char>>& board, string word, int i, int j, int k)
    {
        if(k==word.size())
            return true;
        
        if(i<0 || j<0 || i==board.size() || j==board[0].size() || board[i][j]!=word[k] || board[i][j]=='.')
            return false;
        
        bool abc=false;
        char ch = board[i][j];
        board[i][j]='.';
        
        abc = Solve(board,word,i+1,j,k+1) || Solve(board,word,i-1,j,k+1) || Solve(board,word,i,j+1,k+1) || Solve(board,word,i,j-1,k+1);
        // if(i<board.size()-1)
        //     abc = abc || Solve(board,word,i+1,j,k+1);
        // if(i>0)
        //     abc = abc || Solve(board,word,i-1,j,k+1);
        // if(j<board[0].size()-1)
        //     abc = abc || Solve(board,word,i,j+1,k+1);
        // if(j>0)
        //     abc = abc || Solve(board,word,i,j-1,k+1);
        
        board[i][j]=ch;
        return abc;
    }
    bool exist(vector<vector<char>>& board, string word) {
       
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(Solve(board,word,i,j,0))
                    return true;
                
            }
        }
        return false;
        
    }
};
