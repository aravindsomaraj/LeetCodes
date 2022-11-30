class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        if(n==1)
            return 1;
        sort(nums.begin(),nums.end());
        
        int c=1,maxc=0;
        for(int i=0; i<n-1; i++)
        {
            
            if((nums[i]+1)==nums[i+1])
                c++;
            else
            {
                if(nums[i]!=nums[i+1])
                    c=1;
            }
            maxc=max(maxc,c);
        }
        return maxc;
    }
};