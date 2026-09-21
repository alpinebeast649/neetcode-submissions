class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sz = nums.size();
        unordered_map<int, int>comp;
        int com = 0;
        vector<int>result;

        for(int i = 0; i < sz; i++) {
            com = target - nums[i];
            if(comp.count(com)) {
                result.push_back(comp[com]);
                result.push_back(i);
            }
            comp[nums[i]] = i;
        }
        return result;
    }
};
