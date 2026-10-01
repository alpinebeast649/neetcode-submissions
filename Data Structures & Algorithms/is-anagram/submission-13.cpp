class Solution {
public:
    bool isAnagram(string s, string t) {
        int sl = s.length();
        int tl = t.length();

        if(sl != tl) {
            return false;
        }

        unordered_map<char, int>map1;
        unordered_map<char, int>map2;

        for(int i = 0; i < sl; i++) {
            map1[s[i]]++;
            map2[t[i]]++;
        }

        return map1 == map2;
    }
};
