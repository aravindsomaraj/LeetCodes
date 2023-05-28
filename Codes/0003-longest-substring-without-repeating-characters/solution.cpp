class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> v (256,0);
        int start=-1,len=0,maxlen=0;int i=0;
        for(;s[i]!='\0';i++)
        {
            v[s[i]]++;
            if(v[s[i]]>1) {
                maxlen = max(maxlen,i-start-1);
                while(v[s[i]]>1)
                {
                    start++;v[s[start]]--;
                }
            }
        }
        return max(maxlen,i-1-start);
    }
};
