class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int>charIndex;

        int result = -1;

        for(int i = 0; i < s.size(); i++) {
            if(charIndex.count(s[i])) {
                result = max(result, i - charIndex[s[i]] - 1);
            } else {
                charIndex[s[i]] = i;
            }
        }

        return result;
    }
};