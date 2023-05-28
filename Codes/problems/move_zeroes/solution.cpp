class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        auto it_r = nums.end();
        for(auto it=nums.begin();it!=it_r;)
        {
            if(*it==0)
            {
                nums.erase(it);
                nums.push_back(0);
                it_r--;
            }
            else
                it++;
        }
    }
};