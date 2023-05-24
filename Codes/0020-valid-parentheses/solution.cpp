class Solution {
public:
    bool isValid(string s) {

        unordered_map<char,char> mp = {{'{','}'}, {'(',')'}, {'[',']'}};
        stack<char> st;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                st.push(s[i]);
            else
            {
                if(st.empty() || mp[st.top()] != s[i])
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
