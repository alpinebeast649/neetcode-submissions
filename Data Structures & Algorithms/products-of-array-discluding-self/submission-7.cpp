class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz = nums.size();
        vector<int>result(sz);
        int zCount = 0;
        int product = 1;

        for(int i = 0; i < sz; i++) {
            if(nums[i] == 0) {
                zCount++;
            } else {
                product *= nums[i];
            }
        }

        for(int i = 0; i < sz; i++) {
            if(zCount >= 2) {
                result[i] = 0;
            } else if(zCount == 1) {
                if(nums[i] == 0) {
                    result[i] = product;
                } else {
                    result[i] = 0;
                }
            } else {
                result[i] = product/nums[i];
            }
        }

        return result;
    }
};
