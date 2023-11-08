class Solution {
public:
    string getPermutation(int n, int k) {

        string s="";
        for(int i=1;i<=n;i++) s=s+to_string(i);
        int i=1;
        while(i!=k && next_permutation(s.begin(),s.end())) i++;
        return s;
        
    }
};