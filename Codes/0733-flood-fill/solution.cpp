class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int m = image.size();
        int n = image[0].size();
        int x = image[sr][sc];
        function<void(int, int)> dfs = [&](int i, int j) {
            if(i<0 || j<0 || i==m || j==n || image[i][j]==color || image[i][j]!=x) return;

            image[i][j]=color;
            dfs(i+1,j);
            dfs(i-1,j);
            dfs(i,j+1);
            dfs(i,j-1);
        };

        dfs(sr,sc);
        return image;
    }
};
