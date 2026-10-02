class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sz = digits.size();
        vector<int>result;

        for(int i = sz - 1; i>=0; i--) {
            digits[i]++;
            if(digits[i] < 10) {
                return digits;
            }
            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};