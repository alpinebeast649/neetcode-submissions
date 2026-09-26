class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>index;
        int sz  = nums.size();
        vector<int>result;

        for(int i = 0; i < sz; i++) {
            int comp = target - nums[i];
            if(index.count(comp)) {
                result.push_back(index[comp]);
                result.push_back(i);
            }
            index[nums[i]] = i;
        }

        return result;
    }
};
