class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        int n = nums.size(), l=0,r=0;
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            l=i+1;
            r=n-1;
            while(l<r)
            {
                int sum = nums[l]+nums[r]+nums[i];
                if(sum==0)
                {
                    ans.push_back({nums[i],nums[l++],nums[r--]});
                    while(l<n-1 && nums[l]==nums[l-1]) l++;
                    while(r>l && nums[l]==nums[r+1]) r--;
                }
                else if(sum>0)
                    r--;
                else
                    l++;
            }
        }
        return ans;
    }
};
