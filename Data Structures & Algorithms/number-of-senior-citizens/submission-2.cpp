class Solution {
public:
    int countSeniors(vector<string>& details) {
        int l = details.size();
        int age = 0;
        int d1 = 0;
        int d2 = 0;
        int count = 0;
        for(int i = 0; i < l; i++) {
            int d1 = (details[i][11] - '0');
            int d2 = (details[i][12] - '0');
            age = d1 * 10 + d2;
            if(age > 60) {
                count++;
            }
        }

        return count;

    }
};