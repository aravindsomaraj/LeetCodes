class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        set<int> s;
        for(int& i:nums)
            s.insert(i);
        int ans=0;
        int prev=*(s.begin()),streak=0;
        for(int i:s)
        {
            if(i==prev){ streak++; prev++; }
            else { prev=i+1; streak=1; }
            ans = max(ans,streak);
        }
        return ans;
    }
};
