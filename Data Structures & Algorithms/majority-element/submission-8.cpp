class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int sz = nums.size();
        int count = 0;

        for(int i = 0; i < sz; i++) {
            if(count == 0) {
                candidate = nums[i];
                count++;
            } else if(nums[i] == candidate) {
                count++;
            } else {
                count--;
            }
        }

        return candidate;
    }
};