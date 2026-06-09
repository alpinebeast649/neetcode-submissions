class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int term1 = 0;
        int term2 = 0;
        term2 = nums[0] * nums[1];
        term1 = nums[(nums.size() - 1)] * nums[(nums.size() - 2)];
        return term1 - term2;
    }
};