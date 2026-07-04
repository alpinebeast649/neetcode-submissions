class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();
        unordered_map<int, int>complement;
        int comp = 0;
        vector<int>result;

        for(int i = 0; i < length; i++) {
            comp = target - nums[i];
            if(complement.count(comp)) {
                result.push_back(complement[comp]);
                result.push_back(i);
            }
            complement[nums[i]] = i;
        }

        return result;
    }
};
