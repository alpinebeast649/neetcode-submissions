class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int left = 0;
        int maxLength = 0;
        
        for(int i = 0; i < s.length(); i++) {
            while(charSet.count(s[i])) {
                charSet.erase(s[left]);
                left++;
            }
            charSet.insert(s[i]);
            maxLength = max(maxLength, i - left + 1);
        }
        
        return maxLength;
    }
};