class Solution {
public:
    bool isAnagram(string s, string t) {
        int sl = s.length();
        int tl = t.length();

        if(sl != tl) {
            return false;
        }

        unordered_map<char, int>f1;
        unordered_map<char, int>f2;

        for(int i = 0; i < sl; i++) {
            f1[s[i]]++;
            f2[t[i]]++;
        }

        return f1 == f2;
    }
};
