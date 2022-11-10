class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n=nums.size();
        int l=0,r=n-1;
        int minVal=INT_MAX;
        while(l<=r)
        {
            int mid = (l+r)/2;
            // cout << l << " " << r << " " << mid << " " << endl;
            if(nums[l]<=nums[mid])
            {
                
                if(minVal > nums[l])
                {
                    minVal=nums[l];
                }
                l=mid+1;
            }
            else
            {
                if(minVal > nums[mid])
                {
                    minVal=nums[mid]; 
                }
                r=mid-1;
            }
        }
        
        return minVal;
        
    }
};
