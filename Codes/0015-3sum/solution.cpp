class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int n = nums.size();
        set<vector<int>> s;
        vector<vector<int>> output;
        for(int i=0;i<n-2;i++)
        {
            int low = i+1, high = n-1;
            while(low<high)
            {
                if(nums[i]+nums[low]+nums[high] < 0)
                    low++;
                else if(nums[i]+nums[low]+nums[high] > 0)
                    high--;
                else
                {
                    s.insert({nums[i],nums[low],nums[high]});
                    low++,high--;
                }
            }
        }

        for(auto& it:s) output.push_back(it);
        return output;
    }
};
