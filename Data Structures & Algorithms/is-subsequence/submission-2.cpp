class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pointer1 = 0;
        int pointer2 = 0;

        while(pointer1 < s.length() && pointer2 < t.length()) {
            if(s[pointer1] == t[pointer2]) {
                pointer1++;
                pointer2++;
            } else {
                pointer2++;
            }
        }

        if(pointer1 == s.length()) {
            return true;
        } else {
            return false;
        }
    }
};