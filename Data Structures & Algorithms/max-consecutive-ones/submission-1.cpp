class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int res = 0;
        int l = nums.size();

        for(int i = 0; i < l; i++) {
            if(nums[i] == 1) {
                count++;
                res = max(res, count);
            } else {
                count = 0;
            }
        }

        return res;
    }
};