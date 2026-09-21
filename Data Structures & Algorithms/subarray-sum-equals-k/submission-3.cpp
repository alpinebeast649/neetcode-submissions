class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sz = nums.size();
        int count = 0;
        int currentSum = 0;
        unordered_map<int, int>prefixSumCount;
        prefixSumCount[0] = 1;

        for(int num: nums) {
            currentSum += num;
            int target = currentSum - k;
            if(prefixSumCount.count(target)) {
                count += prefixSumCount[target];
            }
            prefixSumCount[currentSum]++;
        }

        return count;
    }
};