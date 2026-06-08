class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>copy = heights;
        sort(heights.begin(), heights.end());
        vector<int>sorted;
        sorted = heights;
        int size = heights.size();
        int count = 0;
        for(int i = 0; i < size; i++) {
            if(copy[i] != heights[i]) {
                count++;
            }
        }

        return count;
    }
};