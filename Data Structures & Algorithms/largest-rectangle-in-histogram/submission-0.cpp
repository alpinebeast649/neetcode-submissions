class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int sz = heights.size();
        stack<int> st;
        int maxArea = 0;
        
        for(int i = 0; i <= sz; i++) {
            while(!st.empty() && (i == sz || heights[st.top()] > heights[i])) {
                int height = heights[st.top()];
                st.pop();
                int width;
                if(st.empty()) {
                    width = i;
                } else {
                    width = i - st.top() - 1;
                }
                maxArea = max(maxArea, height * width);
            }
            st.push(i);
        }
        
        return maxArea;
    }
};