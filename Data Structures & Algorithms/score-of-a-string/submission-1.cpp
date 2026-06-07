class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        int diff = 0;
        int asc1 = 0;
        int asc2 = 0;
        for(int i = s.length()-1; i>0; i--){
            asc1 = static_cast<int>(s[i]);
            asc2 = static_cast<int>(s[i-1]);
            diff = abs(asc1 - asc2);
            score += diff;
        }
        return score;
    }
};