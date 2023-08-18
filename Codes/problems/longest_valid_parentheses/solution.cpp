class Solution {
public:
    int longestValidParentheses(string s) {

        stack<int> st;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(') st.push(i);
            else
            {
                if(!st.empty())
                {
                    if(s[st.top()]=='(') st.pop();
                    else st.push(i);
                }
                else st.push(i);
            }
        }
        int longest = 0;
        if(st.empty()) return n;
        else
        {
            int a=n,b=0;
            while(!st.empty())
            {
                b = st.top(); st.pop();
                longest = max(longest,a-b-1);
                a = b;
            }
            longest = max(longest,a);
        }
        return longest;
    }
};