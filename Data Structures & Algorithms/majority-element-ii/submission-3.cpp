class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candidate1 = nums[0], candidate2 = nums[0];
        int count1 = 0, count2 = 0;

        int sz = nums.size();

        for (int i = 0; i < sz; i++) {
            int num = nums[i];

            if (num == candidate1) {
                count1++;
            } else if (num == candidate2) {
                count2++;
            } else if (count1 == 0) {
                candidate1 = num;
                count1++;
            } else if (count2 == 0) {
                candidate2 = num;
                count2++;
            } else {
                count1--;
                count2--;
            }
        }

        count1 = 0;
        count2 = 0;
        for (int i = 0; i < sz; i++) {
            if (nums[i] == candidate1) count1++;
            else if (nums[i] == candidate2) count2++;
        }

        vector<int> res;
        if (count1 > sz / 3) res.push_back(candidate1);
        if (count2 > sz / 3) res.push_back(candidate2);

        return res;
    }
};