class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz = nums.size();

        int product = 1;
        int numZeroes = 0;

        for(int i = 0; i < sz; i++) {
            if(nums[i] != 0) {
                product *= nums[i];
            } else {
                numZeroes++;
            }
        }

        vector<int>result(sz);

        for(int i = 0; i < sz; i++) {
            if(numZeroes > 1) {
                result[i] = 0;
            } else if(numZeroes == 1) {
                if(nums[i] == 0) {
                    result[i] = product;
                } else {
                    result[i] = 0;
                } 
            }
            else {
                result[i] = product/nums[i];
            }
        }

        return result;
    }
};