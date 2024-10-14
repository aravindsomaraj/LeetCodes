class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int& i:nums) pq.push(i);
        long long score=0;
        while(!pq.empty() && k--)
        {
            int val = pq.top();
            score += val; pq.pop();
            pq.push(ceil(val/3.0));
        }
        return score;
    }
};
