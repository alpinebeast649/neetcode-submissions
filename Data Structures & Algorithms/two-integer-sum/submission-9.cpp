class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sz = nums.size();
        unordered_map<int, int>comple;

        int comp = 0; 
        vector<int>result;

        for(int i = 0; i < sz; i++) {
            comp = target - nums[i];
            if(comple.count(comp)) {
                result.push_back(comple[comp]);
                result.push_back(i);
            }
            comple[nums[i]] = i;
        }
        return result;
    }
};
