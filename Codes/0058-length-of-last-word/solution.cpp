class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1, j;
        while(i>=0 && s[i] == ' '){
            i--;
        }
        j = i;
        while(i>=0 && s[i] != ' '){
            i--;
        }
        return j-i;
    }
};
