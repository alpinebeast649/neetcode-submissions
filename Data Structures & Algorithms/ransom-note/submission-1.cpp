class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int>freq;
        int len = magazine.length();
        for(int i = 0; i < len; i++) {
            freq[magazine[i]]++;
        }
        for(int i = 0; i < ransomNote.length(); i++) {
            freq[ransomNote[i]]--;
        }
        for(const auto&pair: freq) {
            if(pair.second < 0) {
                return false;
            }
        }
        return true;
    }
};