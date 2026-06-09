class Solution {
public:
    string largestGoodInteger(string num) {
        int length = num.length();
        int digit = -1;
        int dig = 0;
        for(int i = 0; i < length-2; i++) {
            if(num[i] == num[i+1] && num[i+1] == num[i+2]) {
                dig = num[i] - '0';
                digit = max(digit, dig);
            }
        }
        string res = "";
        if(digit == -1) {
            return "";
        } else {
            digit *= 111;
            if(digit == 0) {
                return "000";
            }
            return(to_string(digit));
        }
    }
    
};