class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int k=0;
        int n=needle.size();
        for(int i=0; i<haystack.size();i++)
        {
            if(needle[k]==haystack[i] && haystack.substr(i,n)==needle)
            {
                return i;
            }
                
        }
        return -1;
        
    }
};
