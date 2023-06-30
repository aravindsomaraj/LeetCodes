class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        stack<int> st;

        int i=0,n=heights.size(),area=INT_MIN;

        while(i<n)
        {
            if(st.empty() || heights[i]>=heights[st.top()])
            {
                st.push(i);
                i++;
            }
            else
            {
                int k = st.top();
                st.pop();
                area = max(area, heights[k] * (st.empty()? i : i - st.top() - 1));
            }
        }
        
        while(!st.empty())
        {
            int k = st.top();
            st.pop();
            area = max(area, heights[k] * (st.empty()? i : i - st.top() - 1));
        }
        return area;
    }
};