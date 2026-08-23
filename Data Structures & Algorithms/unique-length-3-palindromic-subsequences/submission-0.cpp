class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.length();
        int result = 0;
        
        for (char c = 'a'; c <= 'z'; c++) {
            int first = -1, last = -1;
            for (int i = 0; i < n; i++) {
                if (s[i] == c) {
                    if (first == -1) {
                        first = i;
                    }
                    last = i;
                }
            }
            if (first != -1 && last != -1 && first < last) {
                bool seen[26] = {false};
                int count = 0;
                for (int i = first + 1; i < last; i++) {
                    if (!seen[s[i] - 'a']) {
                        seen[s[i] - 'a'] = true;
                        count++;
                    }
                }
                result += count;
            }
        }
        
        return result;
    }
};