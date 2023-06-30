class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();
        if(n<=2) return 0;
        int maxLeft = height[0], maxRight = height[n-1], l=1, r=n-2, water=0;
        while(l<=r)
        {
            if(maxLeft < maxRight)
            {
                if(height[l] > maxLeft) maxLeft = height[l];
                else water += maxLeft - height[l];
                l++;
            }
            else
            {
                if(height[r] > maxRight) maxRight = height[r];
                else water += maxRight - height[r];
                r--;
            }
        }
        return water;
    }
};