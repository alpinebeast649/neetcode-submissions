class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz = nums.size();
        int zeroCount = 0;
        int product = 1;

        for(int i = 0; i < sz; i++) {
            if(nums[i] == 0) {
                zeroCount++;
            } else {
                product *= nums[i];
            }
        }

        vector<int>result(sz);

        for(int i = 0; i < sz; i++) {
            if(zeroCount > 1) {
                result[i] = 0;
            } else if(zeroCount == 1) {
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
