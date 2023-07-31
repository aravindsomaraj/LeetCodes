class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int start=0,end=0,l=0;
        while(start<n && end<n)
        {
            while(start<n && nums[start]!=1)
                start++;
            end = start;
            while(end<n && nums[end]!=0)
                end++;
            l = max(l,end-start);
            start = end;
        }
        return l;
    }
};