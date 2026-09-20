class Solution {
public:
    bool isAnagram(string s, string t) {
        int sl = s.length();
        int tl = t.length();
        
        if(sl != tl) {
            return false;
        }

        unordered_map<char, int>freq1;
        unordered_map<char, int>freq2;

        for(int i = 0; i < sl; i++) {
            freq1[s[i]]++;
            freq2[t[i]]++;
        }

        return freq1 == freq2;
    }
};
