class Solution {
public:
    string reverseVowels(string s) {

        set<char> vow = {'a','e','i','o','u','A','E','I','O','U'};
        int l=0,r=s.size()-1;
        while(l<r)
        {
            while(l<r && vow.count(s[l])==0) l++;
            while(l<r && vow.count(s[r])==0) r--;
            swap(s[l],s[r]);
            l++,r--;
        }
        return s;
    }
};