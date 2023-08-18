class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        vector<int> pre (n,0);
        pre[0]=nums[0];
        for(int i=1;i<n;i++) pre[i] = nums[i] + pre[i-1];

        unordered_map<int,int> mp;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(pre[i]==k)
                ans++;
            if(mp.count(pre[i]-k))
                ans += mp[pre[i]-k];
            
            mp[pre[i]]++;
        }
        return ans;
    }
};