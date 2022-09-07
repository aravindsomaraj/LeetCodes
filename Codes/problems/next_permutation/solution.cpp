class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        if(next_permutation(nums.begin(),nums.end()))
        {
            
            for(int &i:nums)
            {
                 cout << i << " " << endl;
            }   
            // for(int i=0; i<nums.size(); i++)
            // {
            //     cout << nums[i] << " " << endl;
            // }
        }
        else
        {
            sort(nums.begin(),nums.end());
            for(int &i:nums)
            {
                 cout << i << " " << endl;
            } 
        }
            
        
    }
};