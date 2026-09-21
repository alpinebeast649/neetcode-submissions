class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int sz = nums.size();
        unordered_map<int, int>count;
        for(int i = 0; i < sz; i++) {
            count[nums[i]]++;
        }

        vector<vector<int>> freq(sz + 1);

        for(const auto&pair: count) {
            freq[pair.second].push_back(pair.first);
        }

        vector<int>result;

        for(int i = sz; i > 0; i--) {
            for(int n: freq[i]) {
                result.push_back(n);
                if(result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};