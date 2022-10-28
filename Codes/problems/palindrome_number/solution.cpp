class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0)
            return false;
        vector<int> ans;
        while(x)
        {
            ans.push_back(x%10);
            x/=10;
        }
        
        int l=0, r=ans.size()-1;
        while(l<r)
        {
            if(ans[l]!=ans[r])
                return false;
            l++;
            r--;
        }
        
        return true;
        
    }
};