class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int curr=-1e9-1,freq=0;
        for(int& i:nums)
        {
            if(freq==0)
                curr = i,freq = 1;
            else if(i==curr)
                freq++;
            else
                freq--;
        }
        return curr;
    }
};
