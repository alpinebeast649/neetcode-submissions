class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();
        unordered_map<int, int>comp;
        int complement = 0;
        vector<int>result;
        for(int i = 0; i<length; i++) {
            complement = target - nums[i];
            if(comp.count(complement)) {
                result.push_back(comp[complement]);
                result.push_back(i);
                return result;
            }
            comp[nums[i]] = i;
        }
        return result;
    }
};
