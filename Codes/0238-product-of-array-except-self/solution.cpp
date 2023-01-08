class Solution {
public:
    int Solve(vector<int>& nums, vector<int>& pro, int l, int i)
    {
        if(i==nums.size()-1)
        {
            pro[i]=l;
            return nums[i];
        }
        
        int giv = Solve(nums,pro,l*nums[i],i+1);
        pro[i] = l*giv;
        return nums[i]*giv;
    }
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> pro (nums.size(),0);
        int p = Solve(nums,pro,1,0);

        return pro;
        
    }
};
