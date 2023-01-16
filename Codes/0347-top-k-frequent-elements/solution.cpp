class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        for(int& num: nums)
        {
            mp[num]++;
        }

        priority_queue<pair<int,int>> heap;

        for(auto it=mp.begin();it!=mp.end();it++)
        {
            heap.push(make_pair(it->second,it->first));
            cout << heap.top().first << " " << heap.top().second << endl;
        }

        vector<int> ans;
        int i=1;
        while(i<=k)
        {
            ans.push_back(heap.top().second);
            heap.pop();
            i++;
        }
        return ans;
    }
};
