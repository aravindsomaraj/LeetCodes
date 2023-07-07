class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> v (256,0);
        int start=-1, maxlen = 0;

        for(int i=0;i<s.size();i++)
        {
            v[s[i]]++;
            while(v[s[i]]>1)
            {
                v[s[++start]]--;
            }
            maxlen = max(maxlen,i-start);
        }
        return maxlen;
    }
};
