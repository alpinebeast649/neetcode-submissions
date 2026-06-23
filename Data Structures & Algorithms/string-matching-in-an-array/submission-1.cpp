class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>result;

        int n = words.size();

        sort(words.begin(), words.end(), []
        (const string &a, const string &b) {
            return a.length() < b.length();
        });

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(words[j].find(words[i]) != string::npos) {
                    result.push_back(words[i]);
                    break;
                }
            }
        }
        return result;
    }
};