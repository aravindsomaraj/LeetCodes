class Solution {
public: 
    vector<vector<int>> permute(vector<int>& nums) {

        int n = nums.size();
        vector<vector<int>> ans;

        function<void(int)> permute = [&](int i) {
            if(i==n)
            {
                ans.push_back(nums);
                return;
            }

            for(int j=i;j<n;j++)
            {
                swap(nums[i],nums[j]);
                permute(i+1);
                swap(nums[i],nums[j]);
            }
        };
        
        permute(0);
        return ans;
    }
};
