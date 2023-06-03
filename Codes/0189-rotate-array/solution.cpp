class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int shifts = n-(k%n);
        nums.insert(nums.end(),nums.begin(),nums.begin()+shifts);
        nums.erase(nums.begin(),nums.begin()+shifts);  
    }
};
