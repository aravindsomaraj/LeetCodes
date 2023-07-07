class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size() , n = grid[0].size();
        vector<int> dr {-1,0,1,0,-1};

        queue<pair<int,int>> q;
        int fresh=0;
        for(int i=0;i<m;i++) for(int j=0;j<n;j++)
        {
            if(grid[i][j]==2)
                q.push({i,j});
            else if(grid[i][j]==1)
                fresh++;
        }
        int ans = -1;
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                auto p = q.front(); q.pop();
                for(int i=0;i<4;i++)
                {
                    int r = p.first + dr[i];
                    int c = p.second+ dr[i+1];
                    if(r>=0 && r<m && c>=0 && c<n && grid[r][c]==1)
                    {
                        grid[r][c] = 2;
                        q.push({r,c});
                        fresh--;
                    }
                }
            }
            ans++;
        }
        if(fresh!=0) return -1;
        return ans==-1 ? 0 : ans;

    }
};