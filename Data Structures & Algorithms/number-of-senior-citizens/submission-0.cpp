class Solution {
public:
    int countSeniors(vector<string>& details) {
        int length = details.size();
        int age = 0;
        int count = 0;
        for(int i = 0; i < length; i++) {
            age = static_cast<int>(details[i][11] - '0') * 10;
            age += static_cast<int>(details[i][12] - '0');
            if(age > 60) {
                count++;
            }
            age = 0;
        }
        return count;
    }
};