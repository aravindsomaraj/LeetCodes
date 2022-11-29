class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        int freq=-1, curr=0;
        for(int i=0; i<n; i++)
        {
            if(freq==-1)
            {
                freq=0;
                curr=nums[i];
            }
            else if(nums[i]==curr)
            {
                freq++;
            }
            else
            {
                freq--;
            }
        }
        
        return curr;
    }
};