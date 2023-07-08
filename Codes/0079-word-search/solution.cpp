class Solution {
public:
    int m,n;
    bool dfs(vector<vector<char>>& board, int i, int j, int k, string s)
    {
        if(k==s.size())
            return true;
        if(i<0 || j<0 || i==m || j==n || board[i][j]=='.' || board[i][j]!=s[k])
            return false;
        
        char ch = board[i][j];
        board[i][j]='.';
        bool f = (
            dfs(board,i+1,j,k+1,s) ||
            dfs(board,i-1,j,k+1,s) ||
            dfs(board,i,j-1,k+1,s) ||
            dfs(board,i,j+1,k+1,s)
        );
        board[i][j]=ch;
        return f;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size(), n=board[0].size();
        for(int i=0;i<m;i++) for(int j=0;j<n;j++)
        {
            if(board[i][j]==word[0])
                if(dfs(board,i,j,0,word)) return true;
        }
        return false;
    }
};
