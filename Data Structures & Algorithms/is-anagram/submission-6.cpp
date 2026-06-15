class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>map1;
        int l1 = s.length();
        int l2 = t.length();
        for(int i = 0; i < l1; i++) {
            map1[s[i]]++;
        }
        for(int i = 0; i < l2; i++) {
            map1[t[i]]--;
        }
        int freq = 0;
        for(const auto&pair: map1) {
            freq = pair.second;
            if(freq != 0) {
                return false;
            }
        }
        unordered_map<char, int>map2;
        for(int i = 0; i < l2; i++) {
            map2[t[i]]++;
        }
        for(int i = 0; i < l1; i++) {
            map2[s[i]]--;
        }
        for(const auto&pair: map2) {
            freq = pair.second;
            if(freq != 0) {
                return false;
            }
        }
        return true;

    }
};
