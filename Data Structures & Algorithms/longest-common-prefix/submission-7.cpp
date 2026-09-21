class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int l1 = strs.size();
        int l2 = strs[0].length();

        string result = "";
        char ch = ' ';

        for(int i = 0; i < l2; i++) {
            ch = strs[0][i];
            for(int j = 0; j < l1; j++) {
                if(strs[j][i] != ch) {
                    return result;
                }
            }
            result += ch;
        }

        return result;
    }
};