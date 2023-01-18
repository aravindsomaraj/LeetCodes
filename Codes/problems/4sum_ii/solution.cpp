class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {

        unordered_map<int,int> mp;
        
        for(int& k:nums3)
        {
            for(int& l:nums4)
            {
                mp[k+l]++;
            }
        }
        int num=0;
        for(int& i:nums1)
        {
            for(int& j:nums2)
            {
                num+=mp[-(i+j)];
            }
        }
        return num;
    }
};