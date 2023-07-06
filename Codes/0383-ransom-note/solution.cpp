class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        multiset<char> s;
        for(char& ch:magazine)
            s.insert(ch);

        for(char& ch:ransomNote)
        {
            if(s.find(ch)==s.end()) return false;
            s.erase(s.find(ch));
        }
        return true;
    }
};
