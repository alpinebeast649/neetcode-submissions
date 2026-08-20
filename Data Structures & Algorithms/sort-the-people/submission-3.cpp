class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        unordered_map<int, string>m;

        for(int i = 0; i < n; i++) {
            m[heights[i]] = names[i];
        }

        sort(heights.begin(), heights.end());
        vector<string>res;

        for(int i = n-1; i >= 0; i--) {
            res.push_back(m[heights[i]]);
        }

        return res;
    }
};