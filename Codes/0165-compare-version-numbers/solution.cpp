class Solution {
public:
    typedef queue<int> qq;
    qq helper(string s)
    {
        qq q; s=s+'.';
        string num="";
        for(char& ch:s)
        {
            if(ch!='.') num+=ch;
            else {
                q.push(stoi(num));
                num="";
            }
        }
        return q;
    }
    int compareVersion(string version1, string version2) {
        qq v1 = helper(version1);
        qq v2 = helper(version2);

        while(!v1.empty() && !v2.empty())
        {
            if(v1.front() < v2.front()) return -1;
            else if(v1.front() > v2.front()) return 1;
            else {
                v1.pop(); v2.pop();
            }
        }
        if(v1.size()) {
            while(v1.size()) {
                if(v1.front()) return 1;
                v1.pop();
            }
        }
        if(v2.size()) {
            while(v2.size()) {
                if(v2.front()) return -1;
                v2.pop();
            }
        }
        return 0;
    }
};
