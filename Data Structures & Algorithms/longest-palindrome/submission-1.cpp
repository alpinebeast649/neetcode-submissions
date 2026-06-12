class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int>freq;

        int l = s.length();
        for(int i = 0; i < l; i++) {
            freq[s[i]]++;
        }
        bool Odd = false;
        int res = 0;
        for(const auto&pair: freq) {
            if((pair.second % 2 == 0)) {
                res+=pair.second;
            } else {
                res += pair.second - 1;
                Odd = true;
            }
        }
        if(Odd) {
            res += 1;
        } 
        return res;
    }
};