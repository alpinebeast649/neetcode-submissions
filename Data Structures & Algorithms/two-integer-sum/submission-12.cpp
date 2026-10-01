class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>complement;
        int sz = nums.size();
        vector<int>result;
        for(int i = 0; i < sz; i++) {
            int comp = target - nums[i];
            if(complement.count(comp)) {
                result.push_back(complement[comp]);
                result.push_back(i);
            }
            complement[nums[i]] = i;
        }
        return result;
    }
};
