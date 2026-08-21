class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        unordered_map<string, vector<string>>map;

        for(string s: strs){
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            map[sorted].push_back(s);
        }

        for(const auto&pair: map) {
            result.push_back(pair.second);
        }
        
        return result;

    }
};
