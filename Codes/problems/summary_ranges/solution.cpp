class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(!nums.size()) return {};
        vector<string> ans;
        int curr_start = nums[0], curr_end=nums[0];
        nums.push_back(nums[nums.size()-1]);
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i] == nums[i+1]-1)
            {
                curr_end = nums[i+1];
            }
            else
            {
                if(curr_start==curr_end)
                    ans.push_back(to_string(curr_start));
                else
                    ans.push_back(to_string(curr_start)+"->"+to_string(curr_end));
                curr_start = curr_end = nums[i+1];
            }
        }
        return ans;
    }
};