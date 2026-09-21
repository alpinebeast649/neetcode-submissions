class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int sz = nums.size();

        vector<int>result(2 * sz);

        for(int i = 0; i < sz; i++) {
            result[i] = nums[i];
            result[i + sz] = nums[i];
        }

        return result;
    }
};