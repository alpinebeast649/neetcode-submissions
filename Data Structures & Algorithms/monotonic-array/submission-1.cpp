class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isInc = nums[0] <= nums[1];

        int sz = nums.size();

        for(int i = 1; i < sz - 1; i++) {
            if(isInc) {
                if(nums[i] <= nums[i+1]) {
                    continue;
                } else {
                    return false;
                }
            } else {
                if(nums[i] >= nums[i+1]) {
                    continue;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};