class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int target=sum-x;
        int max_len=INT_MIN;
        unordered_map<int,int> m;
        m.insert({0,-1});
        int cur=0;
        for(int i=0;i<nums.size();i++){
            cur+=nums[i];
            int dummy=cur-target;
            if(m.find(cur)==m.end()) m[cur]=i;
            if(m.find(dummy)!=m.end()) max_len=max(max_len,i-m[dummy]);
        }
        if(max_len==INT_MIN) return -1;
        return nums.size()-max_len; 
    }
};
