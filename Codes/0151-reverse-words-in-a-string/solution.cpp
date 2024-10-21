class Solution {
public:
    string reverseWords(string s) {
        s = s + " ";
        string wd="";
        stack<string> st;
        for(int i=0;i<size(s);i++)
        {
            if(s[i] != ' ') wd = wd + s[i];
            else {
                if(wd!="") st.push(wd); wd="";
            }
        }

        while(!st.empty())
        {
            wd = wd + st.top() + ((st.size() == 1) ? "" : " ");
            st.pop();
        }
        return wd;
    }
};
