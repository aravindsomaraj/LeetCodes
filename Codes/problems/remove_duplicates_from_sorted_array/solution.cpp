class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            while(i<nums.size()-1 && nums[i]==nums[i+1])
                i++;
            nums[c++]=nums[i];
        }
        return c;
    }
};