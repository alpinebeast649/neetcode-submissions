class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int sz = nums.size();

        for(int i = 0; i < sz; i++) {
            if(nums[i] > nums[(i + 1) % sz]){
                count++;
                if(count > 1) {
                    return false;
                }
            }
        }

        return true;
    }
};