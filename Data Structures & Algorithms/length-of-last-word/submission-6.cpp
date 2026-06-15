class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = s.length();
        int start = 0;

        for(int i = length - 1; i>=0; i--) {
            if(s[i] != ' ') {
                start = i;
                break;
            }
        }

        int count = 0;
        for(int i = start; i>=0; i--) {
            if(s[i] != ' ') {
                count++;
            } else {
                break;
            }
        }

        return count;
    }
};