class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int N = nums.size();

        long long x = 0;
        long long y = 0;

        // x = d - m and y = d^2 - m^2 where d - m equals diff b/w actual and expected sum
        // d^2 - m^2 equals diff b/w actual sum of squares and expected sum of squares

        for(int i = 1; i <= N; i++) {
            x += nums[i - 1] - i;
            y += (long long)nums[i - 1] * nums[i - 1] - (long long)i * i;
        }

        int missing = (y - x * x) / (2 * x);

        int duplicate = missing + x;

        return {duplicate, missing};
    }
};