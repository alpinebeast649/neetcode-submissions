class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> charMap;
        unordered_map<char, char> charMap2; 
        int sl = s.length();
        int tl = t.length();
        
        if(sl != tl) {
            return false;
        }
        
        for(int i = 0; i < sl; i++) {
            if(charMap.count(s[i])) {
                if(charMap[s[i]] != t[i]) {
                    return false;
                }
            }
            charMap[s[i]] = t[i];
        }
        
        for(int i = 0; i < tl; i++) {
            if(charMap2.count(t[i])) {
                if(charMap2[t[i]] != s[i]) {
                    return false;
                }
            }
            charMap2[t[i]] = s[i];
        }
        
        return true;
    }
};