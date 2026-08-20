class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastletter = 0;
        int sz = s.length();
        for(int i = sz - 1; i>=0; i--) {
            if(s[i] != ' ') {
                lastletter = i;
                break;
            }
        }

        int result = 0;
        for(int i = lastletter; i>=0; i--) {
            if(s[i] != ' ') {
                result++;
            } else {
                break;
            }
        }

        return result;
    }
};