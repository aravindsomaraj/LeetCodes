class Solution {
public:
    string convert(string s, int r) {
        
        int n = s.size();

        if(r==1)
            return s;
        vector<string> v (r,"");

        int i=0,j=0;
        while(i<n)
        {
            v[abs(j)]+=s[i++];
            if(j==r-1)
                j=-(j-1);
            else
                j++;
        }
        string ans="";
        for(auto &it: v)
            ans+=it;
        return ans;
    }
};
