class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1 = s.length();
        int l2 = t.length();
        if(l1 != l2) {
            return false;
        }
        unordered_map<char, int>count;
        for(int i = 0; i < l1; i++) {
            count[s[i]]++;
        }
        for(int i = 0; i < l2; i++) {
            count[t[i]]--;
            if(count[t[i]]<0) {
                return false;
            }
        }
        for(int i = 0; i < l1; i++) {
            if(count[s[i]] != 0) {
                return false;
            }
        }
        return true;
    }
};
