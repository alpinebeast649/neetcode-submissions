class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int>freq;
        int len = s.length();
        for(int i = 0; i < len; i++) {
            freq[s[i]]++;
        }
        int size = freq.size();
        int minEven = INT_MAX;
        int maxOdd = INT_MIN;
        int fr = 0;
        for(const auto&pair: freq) {
            fr = pair.second;
            if(fr % 2 == 0) {
                minEven = min(minEven, fr);
            } else {
                maxOdd = max(maxOdd, fr);
            }
        }
        return (maxOdd - minEven);
    }
};