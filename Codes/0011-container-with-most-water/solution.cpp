class Solution {
public:
    
    int Area(vector<int>& height , int l, int r)
    {
        int m=0;
        if(l>=r)
            return 0;
        
        int area = (r-l)*min(height[l],height[r]);
        
        if(area > m)
            m = area;
        
        if(height[l]>height[r])
            return max(m,Area(height,l,r-1));
        else
            return max(m,Area(height,l+1,r));
        
        
    }
    int maxArea(vector<int>& height) {
        
        int max = Area(height,0,height.size()-1);
        
        return max;
        
    }
};
