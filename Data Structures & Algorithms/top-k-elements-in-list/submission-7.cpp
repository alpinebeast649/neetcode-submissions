class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int sz = nums.size(); 
        unordered_map<int, int>freq;
        for(int num: nums) {
            freq[num]++;
        }

        vector<vector<int>>count(sz + 1);
        for(const auto& pair: freq) {
            count[pair.second].push_back(pair.first);
        }
        vector<int>result;

        for(int i = sz; i > 0; i--) {
            for(int n: count[i]) {
                result.push_back(n);
                if(result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};
