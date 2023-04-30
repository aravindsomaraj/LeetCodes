class Solution {
public:
    bool isValid(string s) {

        unordered_map<char,char> mp {{'(',')'},{'[',']'},{'{','}'}};
        stack<char> st;
        for(char& ch:s)
        {
            if(mp.find(ch)!=mp.end())
                st.push(ch);
            else
            {
                if(st.empty() || ch!=mp[st.top()])
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
