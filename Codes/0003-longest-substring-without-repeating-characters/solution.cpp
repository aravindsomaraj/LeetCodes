class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> character(258,-1);
        int maxlen=0;
        int start=-1;
        for(int i=0;i<s.size();i++)
        {
            if(character[s[i]]>start)
                start=character[s[i]];
            character[s[i]]=i;
            maxlen=max(maxlen,i-start);        
        }
        return maxlen;
    }
};
