class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int mod = INT_MAX;
        int evenCount = 1;
        int oddCount = 0;
        int curr = 0;
        int result = 0;
        for(int num: arr) {
            curr += num;
            if(curr % 2 == 0) {
                result += oddCount;
                evenCount++;
            } else {
                result += evenCount;
                oddCount++;
            }
            result %= mod;
        }
        return result;
    }
};