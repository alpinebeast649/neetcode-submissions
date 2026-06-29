class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate =nums[0];
        int count = 0;

        int sz = nums.size();

        for(int i = 0; i < sz; i++) {
            if(count == 0) {
                candidate = nums[i];
                count++;
            } else if(candidate == nums[i]) {
                count++;
            } else {
                count--;
            }
        }

        return candidate;
    }
};