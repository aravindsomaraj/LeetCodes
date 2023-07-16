class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size();
        int n = nums2.size();
        unordered_map<int,int> mp;
        vector<int> res;
        for(int i=0; i<m; i++)
        {
            mp[nums1[i]]++;
        }

        for(int i=0; i<n; i++)
        {
            if(mp[nums2[i]]>0)
            {
                res.push_back(nums2[i]);
                mp[nums2[i]]=-1;
            }
        }
        
        return res;
    }
};