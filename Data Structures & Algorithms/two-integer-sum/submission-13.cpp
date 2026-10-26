class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>complement;
        vector<int>result;

        int sz = nums.size();
        for(int i = 0; i < sz; i++) {
            int c = target - nums[i];
            if(complement.count(c)) {
                result.push_back(complement[c]);
                result.push_back(i);
            }
            complement[nums[i]] = i;
        }

        return result;
    }
};
