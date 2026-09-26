class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;

        unordered_map<string, vector<string>>s;
        for(string str: strs) {
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            s[sorted].push_back(str);
        }

        for(const auto&pair: s) {
            result.push_back(pair.second);
        }

        return result;
    }
};
