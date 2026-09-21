class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numSet(nums.begin(), nums.end());
        int longest = 0;

        int sz = nums.size();

        for(int i = 0; i < sz; i++) {
            if(!numSet.count(nums[i] - 1)) {
                int length = 1;
                while(numSet.count(nums[i] + length)) {
                    length++;
                }
                longest = max(longest, length);
            }
        }

        return longest;
    }
};
