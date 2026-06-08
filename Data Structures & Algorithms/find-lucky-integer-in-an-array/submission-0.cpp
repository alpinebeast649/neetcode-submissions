class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int>freq;
        int size = arr.size();

        for(int i = 0; i < size; i++) {
            freq[arr[i]]++;
        }
        int res = -1;
        for(const auto& pair: freq) {
            if(pair.first == pair.second) {
                res = max(res, pair.first);
            }
        }

        return res;
    }
};