class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),maxd = INT_MAX,ans=0;
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;

            int l=i+1,r=n-1;
            while(l<r)
            {
                int sum = nums[i]+nums[l]+nums[r];
                if(sum==target) return sum;
                if(abs(target-sum)<maxd)
                    maxd = abs(target-sum),ans=sum;
                if(sum > target)
                {
                    r--;
                    while(r>l && nums[r]==nums[r+1]) r--;
                }
                else
                {
                    l++;
                    while(l<r && nums[l]==nums[l-1]) l++;
                }
            }
            
        }
        return ans;
    }
};
