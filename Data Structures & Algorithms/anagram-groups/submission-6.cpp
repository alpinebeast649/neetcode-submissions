class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        unordered_map<string, vector<string>>m;

        for(string s: strs) {
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            m[sorted].push_back(s);
        }

        for(const auto&pair: m) {
            result.push_back(pair.second);
        }

        return result;

    }
};
