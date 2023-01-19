class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int curEl=101;
        int curPo=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=curEl)
            {
                curEl=nums[i];
                nums[curPo]=curEl;
                curPo++;
            }
        }
        return curPo++;
    }
};