class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {

        int n = temp.size();

        vector<int> ans (n,0);
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            if(st.empty()) st.push(i);
            else
            {
                while(!st.empty() && temp[st.top()] < temp[i])
                {
                    int t = st.top(); st.pop();
                    ans[t] = i-t;
                }
                st.push(i);
            }
        }
        return ans;    
    }
};