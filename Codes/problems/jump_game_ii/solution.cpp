class Solution {
public:
    int jump(vector<int>& nums) {
        
        
        int n = nums.size(), mx = nums[0], cr = nums[0];
        if(n<2)
            return 0;
        int j = 1;
        int i = 0;
        
        while(i<n-1)
        {
            mx = max(mx,i+nums[i]);
            
            if(cr==i)
            {
                j++;
                cr=mx;
            }
            i++;
        }
        return j;
        
    }
};