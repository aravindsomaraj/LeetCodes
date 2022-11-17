class Solution {
public:
    int m,n;
    
    int s(vector<vector<int>>& ht, int i, int j, vector<vector<int>>& oc)
    {
        if(i<0 || j<0 || i==m || j==n || ht[i][j]==100004)
            return 0;
        
        if(oc[i][j]==1)
            return oc[i][j];
        
        // cout << i << "," << j << endl;
        
        int a=0;
        int k = ht[i][j];
        ht[i][j]=100004;
        
        if (i>0 && ht[i-1][j]<=k)   
            a+= s(ht,i-1,j,oc);
        if (j>0 && ht[i][j-1]<=k)   
            a+= s(ht,i,j-1,oc);
        if (i<m-1 && ht[i+1][j]<=k) 
            a+= s(ht,i+1,j,oc);
        if (j<n-1 && ht[i][j+1]<=k) 
            a+= s(ht,i,j+1,oc);
        
        if(a)
            oc[i][j]=1;
        
        ht[i][j]=k;
        return oc[i][j];
        
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        
        m = heights.size();
        n = heights[0].size();
        
        vector<vector<int>> atl(m, vector<int> (n,0));
        vector<vector<int>> pac(m, vector<int> (n,0));
        
        for(int i=0;i<m;i++)
        {
            pac[i][0]=1;
            atl[i][n-1]=1;
        }
        for(int i=0;i<n;i++)
        {
            pac[0][i]=1;
            atl[m-1][i]=1;
        }
        vector<vector<int>> res;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(s(heights,i,j,pac) && s(heights,i,j,atl))
                    res.push_back({i,j});
            }
        }
        
        return res;
    }
};
