class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l,r;
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;

            l=i+1;
            r=n-1;
            while(l<r)
            {
                int sum=nums[l]+nums[r]+nums[i];

                if(sum<0)
                l++;

                else if(sum>0)
                r--;

                else
                { 
                    result.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    while(l<n-1 && nums[l]==nums[l-1]) l++;
                    r--;
                    while(r>l && nums[l]==nums[r+1]) r--;
                };
            }
        }
        return result;
    }
};