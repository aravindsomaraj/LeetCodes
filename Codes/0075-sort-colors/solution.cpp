class Solution {
public:
    void sortColors(vector<int>& nums) {

        int n=nums.size();
        vector<int> mp (3,0);
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int k=0;
        for(int i=0;i<n;i++)
        {
            while(!mp[k])
                k++;
            nums[i]=k;
            mp[k]--;
        }
        
    }
};
