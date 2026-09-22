class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int sum = 0;
        int minLength = INT_MAX;
        
        for(int i = 0; i < n; i++) {
            sum += nums[i];
            
            while(sum >= target) {
                minLength = min(minLength, i - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        
        return minLength == INT_MAX ? 0 : minLength;
    }
};