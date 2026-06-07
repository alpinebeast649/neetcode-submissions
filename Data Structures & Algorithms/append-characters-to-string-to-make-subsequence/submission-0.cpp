class Solution {
public:
    int appendCharacters(string s, string t) {
        int pointer1 = 0;
        int pointer2 = 0;
        int count = 0;

        while(pointer1 < s.length() && pointer2 < t.length()) {
            if(s[pointer1] == t[pointer2]) {
                pointer1++;
                pointer2++;
                count++;
            } else {
                pointer1++;
            }
        }

        return (t.length()-count);
    }
};