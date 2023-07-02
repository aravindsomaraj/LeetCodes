class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        int l[n],r[n];
        l[0] = nums[0] , r[n-1] = nums[n-1];
        vector<int> res;

        for(int i=1;i<n;i++)
        {
            if(i%k == 0) l[i] = nums[i];
            else         l[i] = max(l[i-1],nums[i]);

            int j = n-1-i;
            if(j%k == (k-1))  r[j] = nums[j];
            else              r[j] = max(r[j+1],nums[j]);
        }

        for(int i=0,j=k-1 ; j<n; i++, j++)
        {
            res.push_back(max(r[i],l[j]));
        }
        return res;
    }
};