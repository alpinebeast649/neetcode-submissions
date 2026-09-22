class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int sLen = s1.length();
        int tLen = s2.length();
        
        if(sLen > tLen) {
            return false;
        }
        
        vector<int> s1Freq(26, 0);
        vector<int> windowFreq(26, 0);
        
        for(char c : s1) {
            s1Freq[c - 'a']++;
        }
        
        for(int i = 0; i < sLen; i++) {
            windowFreq[s2[i] - 'a']++;
        }
        
        if(s1Freq == windowFreq) {
            return true;
        }
        
        for(int i = sLen; i < tLen; i++) {
            windowFreq[s2[i] - 'a']++;
            windowFreq[s2[i - sLen] - 'a']--;
            
            if(s1Freq == windowFreq) {
                return true;
            }
        }
        
        return false;
    }
};