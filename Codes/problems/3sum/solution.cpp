class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<3 || nums[0]>0)
            return {};
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
                break;
            if(i>0 && nums[i]==nums[i-1])
                continue;
            
            int low=i+1,high=n-1;
            while(low<high)
            {
                int sum=nums[i]+nums[low]+nums[high];
                if(sum>0)
                    high--;
                else if(sum<0)
                    low++;
                else
                {
                    ans.push_back({nums[i],nums[low],nums[high]});
                    int loc=nums[low];int hoc=nums[high];
                    while(low<high&&nums[low]==loc)
                        low++;
                    while(low<high&&nums[high]==hoc)
                        high--;
                }   
            }

        }
        return ans;
    }
};