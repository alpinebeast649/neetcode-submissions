class Solution {
public:
    int scoreOfString(string s) {
        int i1 = 0;
        int i2 = 0;
        int res = 0;

        int l = s.length();

        for(int i = 0; i < l - 1; i++) {
            i1 = s[i] - '0';
            i2 = s[(i+1)] - '0';
            res += abs(i1 - i2);
        }

        return res;
    }
};