class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int len = nums.size();
        int low = 1;
        int high = len-1;

        while(low < high)
        {
            int c=0;
            int mid = (low+high)/2;
            for(int& i:nums)
            {
                if(i<=mid)
                    c++;
            }
            if(c<=mid)
                low=mid+1;
            else
                high=mid;
        }
        return low;
        
    }
};