class Solution {
public:
    int maxScore(string s) {
        int zeroes = 0;
        int ones = 0;
        int res = INT_MIN;

        if(s[0] == '0') {
            zeroes++;
        } else {
            ones++;
        }

        for(int i = 1; i < s.size(); i++) {
            res = max(res, zeroes - ones);
            if(s[i] == '0') {
                zeroes++;
            } else {
                ones++;
            }
        }

        return res + ones;
    }
};