class Solution {
public:
    int reverse(int num)
    {
        int rev=0,d=0;
        while(num)
        {
            d=num%10;
            rev=rev*10+d;
            num/=10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        
        int c=0;
        int n=nums.size();
        set<int> ans;
        for(int i=0; i<n; i++)
        {
            int revnum = reverse(nums[i]);
            nums.push_back(revnum);
            ans.insert(nums[i]);
            ans.insert(revnum);
        }
        
        return ans.size();
    }
};