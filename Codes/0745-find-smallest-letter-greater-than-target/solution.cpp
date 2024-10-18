class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        set<char> s; 
        for(char& ch:letters) s.insert(ch);
        
        if(s.find(target) == s.end()) s.insert(target);
        auto it = s.find(target);
        advance(it,1);
        return it==s.end() ? letters[0] : *it;
    }
};
