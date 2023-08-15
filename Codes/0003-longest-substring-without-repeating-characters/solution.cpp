class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int start=-1;
        vector<int> v (256,-1);
        int posn=0,max_len=0;
        for(int i=0;i<s.size();i++)
        {
            if(v[s[i]]>start)
                start=v[s[i]];
            v[s[i]]=i;
            max_len=max(max_len,i-start);        
        }
        return max_len;
    }
};
