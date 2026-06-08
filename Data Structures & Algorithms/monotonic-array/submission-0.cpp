class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isDec = nums[0] > nums[1];
        for(int i = 0; i < nums.size() - 1; i++) {
            if(isDec) {
                if(nums[i] < nums[i+1]) {
                    return false;
                }
            } else {
                if(nums[i] > nums[i+1]) {
                    return false;
                }
            }
        }
        return true;
    }
};