class Solution {
public:
    vector<int> minOperations(string boxes) {
        int sz = boxes.length();
        vector<int>res(sz, 0);

        int moves = 0;
        int balls = 0;

        for(int i = 0; i < sz; i++) {
            res[i] += moves;
            if(boxes[i] == '1') {
                balls++;
            }
            moves += balls;
        }

        balls = 0;
        moves = 0;

        for(int i = sz - 1; i >= 0; i--) {
            res[i] += moves;
            if(boxes[i] == '1') {
                balls++;
            }
            moves += balls;
        }

        return res;

    }
};