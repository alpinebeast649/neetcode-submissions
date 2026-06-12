class Solution {
public:
    int minOperations(string s) {
        int len = s.length();

        int A = 0;

        for(int i = 0; i < len; i++) {
            if(i % 2 == 0) {
                if(s[i] != '0') {
                    A++;
                }
            } else {
                if(s[i] != '1') {
                    A++;
                }
            }
        }

        int B = len - A;
        return min(A, B);
    }
};