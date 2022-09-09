class Solution {
public:
    
    void permute(vector<vector<int>>& a, vector<int>& nums)
    {
        while(next_permutation(nums.begin(),nums.end()))
        {
            if(a.back()!=nums)
                a.push_back(nums);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<vector<int>> a;
        
        sort(nums.begin(),nums.end());
        a.push_back(nums);
        permute(a,nums);
        
        return a;
    }
};