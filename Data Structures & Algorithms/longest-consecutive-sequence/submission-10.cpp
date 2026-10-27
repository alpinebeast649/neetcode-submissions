class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numSet(nums.begin(), nums.end());
        int sz = nums.size();
        int longest = 0;
        int length = 0;

        for(int i = 0; i < sz; i++) {
            length = 0;
            if(!numSet.contains(nums[i] - 1)) {
                while(numSet.contains(nums[i] + length)) {
                    length++;
                }
                longest = max(length, longest);
            }
        }

        return longest;
    }
};
