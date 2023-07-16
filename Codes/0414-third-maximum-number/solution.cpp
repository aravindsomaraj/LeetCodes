class Solution {
public:
    int thirdMax(vector<int>& nums) {

        set<int> s (nums.begin(),nums.end());
        auto it = s.rbegin();
        advance(it,2);
        if(it!=s.rend())
            return *it;
        else
            return *s.rbegin();
    }
};
