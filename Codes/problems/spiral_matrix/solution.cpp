class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<vector<int>> ind;
        vector<int> ans;
        
        int m = matrix.size();
        int n = matrix[0].size();
        int f=0;
        int u=0,d=m,l=0,r=n;
        int i=0,j=0;
        
        
        while(i>=u&&i<d&&j>=l&&j<r)
        {
            switch(f%4)
            {
                case 0: while(j<r)
                        {
                            ind.push_back({i,j});
                            j++;
                        }
                        j--;
                        u+=1;
                        i++;
                        f+=1;
                        break;
                case 1: while(i<d)
                        {
                            ind.push_back({i,j});
                            i++;
                        }
                        i--;
                        r-=1;
                        j--;
                        f+=1;
                        break;
                case 2: while(j>=l)
                        {
                            ind.push_back({i,j});
                            j--;
                        }
                        j++;
                        d-=1;
                        i--;
                        f+=1;
                        break;
                case 3: while(i>=u)
                        {
                            ind.push_back({i,j});
                            i--;
                        }
                        i++;
                        l+=1;
                        j++;
                        f+=1;
                        break;

            }
            
        }
        
        for(i=0; i<(m*n); i++)
        {
            ans.push_back(matrix[ind[i][0]][ind[i][1]]);
        }
        
        return ans;
    }
};