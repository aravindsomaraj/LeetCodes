class Solution {
public:
    string helper(string a)
    {
        int n = a.size();
        int c=0;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]=='#')
                c++;
            else
                if(c>0) a[i]='.',c--;
        }
        string new_s="";
        for(int i=0;i<a.size();i++)
            if(isalpha(a[i])) new_s += a[i];
        return new_s;
    }
    bool backspaceCompare(string s, string t) {

        string a,b;
        a = helper(s);
        b = helper(t);
        return a==b;
        
    }
};
