class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int size = s.size();
        
        string postfix = s.substr(1, size-1);
        string prefix = s.substr(0, size-1);
        
        string sFold = postfix + prefix;
        cout << postfix << " " << prefix << " " << sFold;
        return sFold.find(s) != string::npos;
    }
};