class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> charCount;

        for(string word : words) {
            for(char ch : word) {
                charCount[ch]++;
            }
        }

        for(const auto&pair: charCount) {
            if(pair.second % words.size() != 0) {
                return false;
            }
        }

        return true;
    }
};