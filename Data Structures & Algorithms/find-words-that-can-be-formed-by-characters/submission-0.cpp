class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int l = chars.length();
        unordered_map<char, int>freq;

        for(int i = 0; i < l; i++) {
            freq[chars[i]]++;
        }

        int res = 0;

        for(string word: words) {
            unordered_map<char, int>currentFreq;
            for(char ch : word) {
                currentFreq[ch]++;
            }

            bool isGood = true;
            for(const auto&pair: currentFreq) {
                if(pair.second > freq[pair.first]) {
                    isGood = false;
                    break;
                }
            }

            if(isGood) {
                res += word.length();
            }
        }

        return res;
    }
};