class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need;
        
        for(char c : t) {
            need[c]++;
        }
        
        int left = 0;
        int count = 0;
        int minLength = INT_MAX;
        int start = 0;
        
        for(int i = 0; i < s.length(); i++) {
            if(need.count(s[i])) {
                need[s[i]]--;
                if(need[s[i]] == 0) {
                    count++;
                }
            }
            
            while(count == need.size()) {
                if(i - left + 1 < minLength) {
                    minLength = i - left + 1;
                    start = left;
                }
                
                if(need.count(s[left])) {
                    if(need[s[left]] == 0) {
                        count--;
                    }
                    need[s[left]]++;
                }
                left++;
            }
        }
        
        return minLength == INT_MAX ? "" : s.substr(start, minLength);
    }
};