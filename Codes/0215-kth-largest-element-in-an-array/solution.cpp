
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        priority_queue<int,vector<int>,greater<int>> pq;
        for(int& num: nums)
        {
            pq.push(num);
            if(pq.size()>k)
                pq.pop();
        }
        return pq.top();
        
    }
};

/*
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end(), greater<int>());
        return nums[k-1];
        
    }
};
*/



/*
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int> mset;
        for (int num : nums) {
            mset.insert(num);
            if (mset.size() > k) {
                mset.erase(mset.begin());
            }
        }
        return *mset.begin();
    }
};
*/
