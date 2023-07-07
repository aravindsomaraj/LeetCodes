class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> st;
        for(auto& s:tokens)
        {
            if(isdigit(s[0]) || isdigit(s[1]))
                st.push(stoi(s));
            else
            {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                int num = 0;
                switch(s[0])
                {
                    case '+': num = a+b; break;
                    case '-': num = a-b; break;
                    case '*': num = a*b; break;
                    case '/': num = a/b; break;
                }
                st.push(num);
            }
        }
        return st.top();
    }
};
