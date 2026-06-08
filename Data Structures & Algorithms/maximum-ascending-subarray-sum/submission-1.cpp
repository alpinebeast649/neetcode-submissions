class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int size = nums.size();
        int sum = 0;
        int prev = 0;
        int maxSum = 0;
        for(int i = 0; i < size; i++) {
            if(nums[i] > prev) {
                sum += nums[i];
            } else {
                sum = 0;
                sum += nums[i];
            }
            prev = nums[i];
            maxSum = max(sum, maxSum);
        }
        return maxSum;
    }
};