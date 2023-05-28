class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> output;
        for(int i=0;i<n-2;i++)
        {
            int low = i+1,high=n-1;
            while(low<high)
            {
                if(nums[low]+nums[high]+nums[i] < 0)
                    low++;
                else if(nums[low]+nums[high]+nums[i] > 0)
                    high--;
                else
                {
                    set.insert({nums[i],nums[low],nums[high]});
                    low++;
                    high--;
                }
            }
        }
        for(auto& v:set) output.push_back(v);
        return output;
    }
};
