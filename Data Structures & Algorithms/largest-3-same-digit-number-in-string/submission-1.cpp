class Solution {
public:
    string largestGoodInteger(string num) {
        int n = 0;
        int maxi = 0;
        bool found = false;

        int sz = num.size();
        for(int i = 0; i < sz - 2; i++) {
            if(num[i] == num[i+1] && num[i+1] == num[i+2]) {
                n = num[i] - '0';
                found = true;
            }
            maxi = max(n, maxi);
        }

        if(found) {
            if(maxi != 0) {
            return to_string(maxi * 111);
            } else {
                return "000";
            }
        } else {
            return "";
        }
    }
};