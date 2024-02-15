#define ll long long

class Solution {
public:
    ll largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        ll sum = 0;
        ll ans = -1;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<sum)ans = nums[i] + sum;
            sum+=nums[i];
        }
        
        return ans;
    }
};



