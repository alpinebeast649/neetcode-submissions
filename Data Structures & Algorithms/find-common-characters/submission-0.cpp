class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>minFreq(26, INT_MAX);

        for(string word: words) {
            vector<int>currFreq(26, 0);
            for(char letter: word) {
                currFreq[letter - 'a']++;
            }

            for(int i = 0; i < 26; i++) {
                minFreq[i] = min(currFreq[i], minFreq[i]);
            }
        }

        vector<string>result;
        for(int i = 0; i < 26; i++) {
            while(minFreq[i] > 0) {
                result.push_back(string(1, 'a' + i));
                minFreq[i]--;
            }
        }

        return result;
    }
};