class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>result;

        int sz = nums.size();

        for(int i = 0; i < sz; i++) {
            if(i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int left = i + 1;
            int right = sz - 1;

            while(left < right) {
                int sum = nums[i] + nums[right] + nums[left];

            if(sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;

                while(left < right && nums[left] == nums[left - 1]) {
                    left++;
                }

                while(left < right && nums[right] == nums[right + 1]) {
                    right--;
                }
            } else if(sum < 0) {
                left++;
                } else {
                right--;
                }
            }
        }
        return result;
    }
};