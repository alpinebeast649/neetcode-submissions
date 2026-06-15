class Solution {
public:
    int appendCharacters(string s, string t) {
        int res = 0;
        int count = 0;
        int p1 = 0;
        int p2 = 0;

        while(p1 < s.length() && p2 < t.length()) {
            if(s[p1] == t[p2]) {
                p1++;
                p2++;
                count++;
            } else {
                p1++;
            }
        }

        return t.length() - count;
    }
};