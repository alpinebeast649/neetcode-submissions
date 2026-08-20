class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int count = 0;

        int sz = nums.size();

        for(int i = 0; i < sz; i++) {
            if(nums[i] == 1) {
                count++;
                maxi = max(count, maxi); 
            } else {
                count = 0;
            }
        }

        return maxi;
    }
};