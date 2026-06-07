class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>seen;
        int length = nums.size();
        for(int i = 0; i < length; i++) {
            if(seen.count(nums[i])) {
                return true;
            }
            seen.insert(nums[i]);
        }
        return false;
    }
};