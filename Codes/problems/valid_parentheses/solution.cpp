class Solution {
public:
    bool isValid(string s) {

        auto corr = [](char ch) { 
            char chx;
            switch(ch)
            {
                case '(' : chx = ')'; break;
                case '{' : chx = '}'; break;
                case '[' : chx = ']'; break;
            }
            return chx;
        };
        stack<char> st;
        for(char& ch:s)
        {
            if(ch=='(' || ch=='{' || ch=='[') st.push(ch);
            else
            {
                if(st.empty() || ch!=corr(st.top())) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};