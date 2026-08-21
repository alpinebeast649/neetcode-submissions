class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int length = text.length();
        unordered_map<char, int>freq;
        for(int i = 0; i < length; i++) {
            freq[text[i]]++;
        }
        freq['l'] = freq['l']/2;
        freq['o'] = freq['o']/2;

        int minimum = INT_MAX;
        minimum = min(minimum, min(freq['b'], min(freq['a'], min(freq['l'], min(freq['o'], freq['n'])))));        
        return minimum;

    }
};