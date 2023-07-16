class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        if(n<4) return {};
        sort(nums.begin(),nums.end());
        set<vector<int>> ans;
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                int l=j+1,r=n-1;
                while(l<r)
                {
                    long sum1 = nums[i]+nums[j];
                    long sum2 = target - (long)(nums[r] + nums[l]);
                    if(sum1==sum2)
                    {
                        ans.insert({nums[i],nums[j],nums[l],nums[r]});
                        l++,r--;
                    }
                    else if(sum1 > sum2)
                    {
                        r--;
                    }
                    else
                    {
                        l++;
                    }
                }
            }
        }
        vector<vector<int>> ansn (ans.begin(),ans.end());
        return ansn;
    }
};
