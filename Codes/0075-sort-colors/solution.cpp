class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int,int> mp ;
        
        for(int i=0; i<n; i++)
        {
            // cout << nums[i] << " " << mp[nums[i]] << endl;
            mp[nums[i]]++;  
            // cout << nums[i] << " " << mp[nums[i]] << endl;
        }
        // cout << mp[0];cout << mp[1];cout << mp[2];
        
        int k=0;
        for(int i=0; i<n; i++)
        {
            cout << mp[k] << " ";
            while(mp[k]==0)
            {
                k++;
            }
            nums[i] = k;
            mp[k]--;
        }
        
    }
};
