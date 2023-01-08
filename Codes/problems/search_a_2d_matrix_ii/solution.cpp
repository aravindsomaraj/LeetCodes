class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();

        int i=0,j=n-1;
        int x=m-1,y=0;

        while(i<=x && j>=y)
        {
            if(matrix[i][j]==target || matrix[x][y]==target)
                return true;
            
            if(target>matrix[x][y])
                y++;
            else
                x--;
            if(target>matrix[i][j])
                i++;
            else
                j--;
            
        }
        return false;
    }
};