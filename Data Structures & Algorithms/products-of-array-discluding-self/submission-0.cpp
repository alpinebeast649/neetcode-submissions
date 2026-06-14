class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int product = 1;
        int zeroCount = 0;
        
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) {
                zeroCount++;
            } else {
                product *= nums[i];
            }
        }
        
        vector<int> res(n);
        
        for(int i = 0; i < n; i++) {
            if(zeroCount > 1) {
                res[i] = 0;
            } 
            else if(zeroCount == 1) {
                if(nums[i] == 0) {
                    res[i] = product;  
                } else {
                    res[i] = 0; 
                }
            } 
            else {
                res[i] = product / nums[i];
            }
        }
        
        return res;
    }
};