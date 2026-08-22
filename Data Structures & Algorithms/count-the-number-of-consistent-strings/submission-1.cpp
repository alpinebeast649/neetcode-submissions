class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int l = allowed.length();
        unordered_map<char, int>freq;
        for(int i = 0; i < l; i++) {
            freq[allowed[i]]++;
        }

        bool isConsistent = false;
        int count = words.size();

        for(string word: words) {
            unordered_map<char, int>curFreq;
            for(char ch: word) {
                if(!freq.count(ch)) {
                    count--;
                    break;
                }
            }
        }

        return count;
    }
};