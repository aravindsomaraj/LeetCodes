class Solution {
public:
    int maxArea(vector<int>& height) {

        int l=0,r=height.size()-1;
        int area=0;
        while(l<r)
        {
            int h = min(height[l],height[r]);
            area = max(area,(r-l)*h);

            while(height[l]<=h && l<r) l++;
            
            while(height[r]<=h && l<r) r--;
        }
        return area;
    }
};