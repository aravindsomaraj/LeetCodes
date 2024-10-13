class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        unordered_map<string,int> mp;
        for(int i=0;i<list1.size();i++) mp[list1[i]] = i;
        vector<string> minStrings = {}; int minPos = list2.size()+list1.size();
        for(int i=0;i<list2.size();i++)
        {
            string s = list2[i];
            if(mp.find(s)==mp.end()) continue;

            if(mp[s]+i <= minPos)
            {
                if(mp[s]+i < minPos) {
                    minStrings.clear();
                    minPos = mp[s]+i;
                }
                minStrings.push_back(s);
            }
        }
        return minStrings;
    }
};
