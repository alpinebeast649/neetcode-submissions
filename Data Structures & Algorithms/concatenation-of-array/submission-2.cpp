class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int length = nums.size();
        int newlength = length * 2;
        vector<int> ans;

        for(int i = 0; i < newlength; i++) {
            if(i < length) {
                ans.push_back(nums[i]);
            } else {
                ans.push_back(nums[i-length]);
            }
        }
        return ans;
    }
};