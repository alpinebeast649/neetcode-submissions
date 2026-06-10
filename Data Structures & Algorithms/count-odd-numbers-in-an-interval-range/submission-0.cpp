class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        int diff = 0;
        diff = high - low;
        count = diff / 2;
        if(low % 2 == 1 || high % 2 == 1) {
            count++;
        }
        return count;
    }
};