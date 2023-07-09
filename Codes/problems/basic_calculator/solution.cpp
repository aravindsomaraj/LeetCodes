class Solution {
public:
    int calculate(string s) {

        stack<pair<int,int>> st;
        int sign = 1;
        int ans = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ') continue;
            if(isdigit(s[i]))
            {
                int num = 0;
                while(isdigit(s[i]))
                {
                    num = num*10 - '0' + s[i++];
                }
                i--;
                ans += sign*num;
                sign = 1;
            }
            else if(s[i]=='(')
            {
                st.emplace(ans,sign);
                ans = 0;
                sign = 1;
            }
            else if(s[i]==')')
            {
                ans = st.top().first + st.top().second*ans;
                st.pop();
            }
            else if(s[i]=='-')
            {
                sign = -1;
            }
        }
        return ans;
    }
};