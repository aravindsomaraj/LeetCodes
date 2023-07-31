class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string ans = "";
        int n = s.size();
        
        int cnt=0;
        for(int i=n-1; i>=0; i--){
            if(s[i] =='-')
                continue;
            if(s[i]>='a' && s[i]<='z')
                s[i] += 'A'-'a';
            // ans = s[i] + ans;
            ans.push_back(s[i]);
            cnt++;
            if(cnt!= 0 && cnt%k==0)
                ans.push_back('-');
                // ans = "-"+ans;
        }
        while(ans.size()>0 && ans[ans.size()-1] == '-')
            ans.pop_back();
            // ans = ans.substr(1);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
