class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        vector<int> act;

        for(int& i:nums)
        {
            auto it = lower_bound(act.begin(),act.end(),i);
            if(it!=act.end())
                *it = i;
            else
                act.push_back(i);
        }
        return act.size();
    }
};
