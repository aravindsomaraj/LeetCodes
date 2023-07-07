class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        int L[n],R[n];
        L[0] = 1 , R[n-1] = 1;
        for(int i=1;i<n;i++)
        {
            L[i] = L[i-1] * nums[i-1];
            R[n-1-i] = R[n-i] * nums[n-i];
        }
        for(int i=0;i<n;i++) nums[i] = L[i] * R[i];
        return nums;
        // vector<int> ans (n);

        // function<int(int,int)> prod = [&](int left, int i) {
        //     if(i==n) return 1;
        //     int right = prod(left*nums[i],i+1);
        //     ans[i] = left * right;
        //     return nums[i]*right;
        // };
        
        // prod(1,0);
        // return ans;
    }
};
