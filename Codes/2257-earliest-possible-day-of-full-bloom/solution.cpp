class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        
        vector<pair<int, int>> vec;
        for(auto i = 0; i < plantTime.size(); i++){
            vec.push_back({growTime[i], plantTime[i]});
        }
        
        sort(begin(vec), end(vec));
        
        int ans = 0;
        for(auto i : vec){
            ans = max(ans, i.first);
            ans += i.second;
        }
        return ans;
    }
};
