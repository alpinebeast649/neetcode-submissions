class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        int len = strs.size();
        int minLength = strs[0].length();
        int length = 0;
        char first = ' ';
        for(int i = 0; i < minLength; i++) {
            first = strs[0][i];
            for(int j = 0; j < len; j++) {
                if(strs[j][i] != first) {
                    return res;
                }
            }
            res += first;
        }
        return res;
    }
};
