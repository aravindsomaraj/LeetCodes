class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {

        int n = matrix[0].size(), m = matrix.size(), area = 0;
        vector<int> h (n,0);
        stack<int> st;
        for(int i=0; i<m; i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]!='0')
                    h[j]+=1;
                else
                    h[j]=0;
            }
            int j=0;
            while(j<n)
            {
                if(st.empty() || h[j]>=h[st.top()])
                    st.push(j++);
                else
                {
                    int k = st.top();
                    st.pop();
                    area = max(area,h[k]*(st.empty()? j : j - st.top() - 1));
                }
            }
            while(!st.empty())
            {
                int k = st.top();
                st.pop();
                area = max(area,h[k]*(st.empty()? j : j - st.top() - 1));
            }
        }
        return area;
    }
};