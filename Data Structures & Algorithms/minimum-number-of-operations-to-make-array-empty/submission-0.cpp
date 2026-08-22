class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int>freq;

        for(int num : nums) {
            freq[num]++;
        }

        int result = 0;
        for(auto&entry: freq) {
            int count = entry.second;
            if(count == 1) {
                return -1;
            }

            result += count / 3;
            if(count % 3 != 0) {
                result++;
            }
        }

        return result;
    }
};