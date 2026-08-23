class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int result = 0;
        int sum = 0;
        int prev = 0;

        for(int num: nums) {
            if(num > prev) {
                sum += num;
                result = max(sum, result);
            } else {
                sum = 0;
                sum += num;
                result = max(sum, result);
            }
            prev = num;
        }

        return result;
    }
};