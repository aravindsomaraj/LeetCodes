class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();
        if(n==1) return 1;

        int c = 1, curr = nums[0], occ=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==curr)
            {
                if(occ < 2) nums[c++] = curr;
                occ++;
            }
            else
            {
                curr = nums[i];
                nums[c++] = curr;
                occ = 1;
            }
        }
        return c;
    }
};