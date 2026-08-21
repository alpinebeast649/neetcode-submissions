class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int>freq;
        int size = nums.size();
        vector<int>res;
        for(int i = 0; i < size; i++) {
            freq[(i+1)]++;
            freq[nums[i]]--;
        }
        int fr = 0;
        for(const auto&pair: freq){
            fr = pair.second;
            if(fr == 1) {
                res.push_back(pair.first);
            }
        }
        return res;
    }
};