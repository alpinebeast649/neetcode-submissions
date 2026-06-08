class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, string> map1;
        unordered_map<string, string> map2;

        vector<string> conv = converted(s);
        int len = pattern.length();

        if (conv.size() != len) {
            return false;
        }

        for (int i = 0; i < len; i++) {
            string p = string(1, pattern[i]);

            if (map1.count(p)) {
                if (map1[p] != conv[i]) {
                    return false;
                }
            }
            map1[p] = conv[i];
        }

        for (int i = 0; i < len; i++) {
            string p = string(1, pattern[i]);

            if (map2.count(conv[i])) {
                if (map2[conv[i]] != p) {
                    return false;
                }
            }
            map2[conv[i]] = p;
        }

        return true;
    }

    vector<string> converted(string str) {
        vector<string> res;
        stringstream ss(str);
        string word;
        while (ss >> word) {
            res.push_back(word);
        }
        return res;
    }
};