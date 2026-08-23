class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sz = nums.size();
        if(sz < 2) {
            return false;
        }
        unordered_map<int, int>prefixRemainder;
        prefixRemainder[0] = -1;
        int currentSum = 0;
        for(int i = 0; i < sz; i++) {
            currentSum += nums[i];
            int remainder = currentSum % k;
            if(prefixRemainder.count(remainder)) {
                if(i - prefixRemainder[remainder] >= 2) {
                    return true;
                }
            } else {
                prefixRemainder[remainder] = i;
            }
        }

        return false;
    }
};