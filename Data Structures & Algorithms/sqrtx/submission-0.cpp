class Solution {
public:
    int mySqrt(int x) {
        long long low = 0;
        long long high = x;

        long long mid = 0;
        long long op = 0;

        while(low <= high) {
            mid = low + (high - low) / 2;
            op = mid * mid;

            if(op == x) {
                return mid;
            } else if (op > x) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return high;
    }
};