class Solution {
public:

    bool Solve(vector<vector<int>>& hi, vector<vector<bool>>& oc, int i, int j, int h)
    {
        if(i<0 || j<0 || i==hi.size() || j==hi[0].size() || hi[i][j]==100001 || hi[i][j]>h)
            return false;
        
        if(oc[i][j])
            return true;

        int val = hi[i][j];
        hi[i][j]= 100001;
        bool a = false;

        a = Solve(hi,oc,i+1,j,val) || a;
        a = Solve(hi,oc,i,j-1,val) || a;
        a = Solve(hi,oc,i,j+1,val) || a;
        a = Solve(hi,oc,i-1,j,val) || a;

        if(a)
            oc[i][j]=a;
            
        hi[i][j]=val;
        return a;
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {

        int m = heights.size();
        int n = heights[0].size();

        vector<vector<bool>> pac (m,vector<bool> (n,false));
        vector<vector<bool>> atl (m,vector<bool> (n,false));

        for(int i=0; i<n; i++)
        {
            pac[0][i]=true;atl[m-1][i]=true;
        }
        for(int i=0; i<m; i++)
        {
            pac[i][0]=true;atl[i][n-1]=true;
        }
        
        vector<vector<int>> ans;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(Solve(heights,pac,i,j,100001) && Solve(heights,atl,i,j,100001))
                    ans.push_back({i,j});
            }
        }

        return ans;
    }
};