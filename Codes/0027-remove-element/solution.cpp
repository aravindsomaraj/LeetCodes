class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c=0;
        for(int& i:nums)
        {
            if(i!=val) nums[c++] = i;
        }
        return c;
    }
};
