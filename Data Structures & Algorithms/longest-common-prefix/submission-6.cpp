class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int l1 = strs.size();
        int l2 = strs[0].length();
        char first = ' ';
        string result = "";

        for(int i = 0; i < l2; i++) {
            first = strs[0][i];
            for(int j = 0; j < l1; j++) {
                if(strs[j][i] != first) {
                    return result;
                }
            }
            result += first;   
        }

        return result;
    }
};