class Solution {
public:
    int specialArray(vector<int>& nums) {
        vector<int> count(nums.size() + 1, 0);
        for (int num : nums) {
            int index = min(num, (int)nums.size());
            count[index]++;
        }

        int totalRight = 0;
        for (int i = nums.size(); i >= 0; --i) {
            totalRight += count[i];
            if (i == totalRight) {
                return totalRight;
            }
        }
        return -1;
    }
};