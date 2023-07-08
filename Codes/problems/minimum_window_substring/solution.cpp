class Solution {
public:
    string minWindow(string s, string t) {

        if (s.size() == 0 || t.size() == 0) return "";
        int start=0,end=0,n=s.size(),min=INT_MAX,posn=0;
        vector<int> remaining(128, 0);
        int target=t.size();
        for(auto& ch:t) remaining[ch]++;

        while(end<=n && start<n)
        {
            if(target)
            {
                if(end==n) break;
                remaining[s[end]]--;
                if(remaining[s[end]]>=0) target--;
                end++;
            }
            else
            {
                if(end-start < min)
                {
                    min = end-start;
                    posn = start;
                }
                remaining[s[start]]++;
                if(remaining[s[start]]>0) target++;
                start++;
            }
        }
        return min == INT_MAX? "" : s.substr(posn,min);
    }
};