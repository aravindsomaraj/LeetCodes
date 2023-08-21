class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.empty()) {
            return 0;
        }
        int m=matrix.size(),n=matrix[0].size(), pre;
        vector<int> cur(n, 0);
        int sz=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int curj = cur[j];
                if(!i || !j || matrix[i][j]=='0')
                    cur[j] = matrix[i][j] - '0';
                else
                {
                    cur[j] = 1 + min({curj,cur[j-1],pre});
                }
                sz = max(cur[j],sz);
                pre = curj;
            }
        }
        return sz*sz;
    }
};
