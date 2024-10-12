class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a == b) return -1;
        return (size(a) < size(b)) ? b.size() : a.size();
    }
};
