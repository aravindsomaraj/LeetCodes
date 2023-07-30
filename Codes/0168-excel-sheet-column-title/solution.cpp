class Solution {
public:
    string convertToTitle(int n) {
        string ans;
        while(n > 0) {
            n--;
            int curr = n % 26;
            n = n / 26;
            ans = char('A'+curr) + ans;
        }
        return ans;
        
    }
};
