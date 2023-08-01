class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        set<int> s;
        for(int& i:candyType)
            s.insert(i);
        
        int req = candyType.size()/2;
        return min((int)s.size(),req);
    }
};