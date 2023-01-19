class Solution {
public:
    bool isValid(string s) {

        unordered_map<char,char> mp = {{'(',')'}, {'{','}'}, {'[',']'}};
        stack<char> st;
        for(char& ch:s)
        {
            if(ch==')' || ch=='}' || ch==']')
            {
                if(st.empty() || mp[st.top()]!=ch)
                    return false;
                else
                    st.pop();
            }
            else
                st.push(ch);
        }
        return st.empty();
    }
};