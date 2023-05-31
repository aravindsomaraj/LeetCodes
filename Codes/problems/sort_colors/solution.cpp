class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> v (3,0);
        
        for(int& i:nums) v[i]++;
        int k=0;
        for(int& i:nums)
        {
            while(!v[k]) k++;
            i = k; v[k]--;
        }
    }
};