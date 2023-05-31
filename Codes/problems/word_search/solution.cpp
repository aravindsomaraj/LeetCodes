class Solution {
public:
    int m,n;string s;
    bool dfs(vector<vector<char>>& board, int i, int j, int k)
    {
        if(k==s.size()) return true;
        if(i==m || j==n || i<0 || j<0 || board[i][j]=='.' || board[i][j]!=s[k]) return false;

        char ch = board[i][j];board[i][j]='.';
        bool f = (
            dfs(board,i+1,j,k+1) ||
            dfs(board,i-1,j,k+1) ||
            dfs(board,i,j+1,k+1) ||
            dfs(board,i,j-1,k+1)
        );
        board[i][j]=ch;
        return f;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size(); n = board[0].size(); s=word;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==word[0])
                {
                    if(dfs(board,i,j,0)) return true;
                }
            }
        }
        return false;
    }
};