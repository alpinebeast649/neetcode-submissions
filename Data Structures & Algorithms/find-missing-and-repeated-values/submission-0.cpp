class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>res(2);
        int len = grid.size();
        int total = len * len;
        unordered_map<int, int>freq;
        for(int i = 1; i <= total; i++) {
            freq[i] = 0; 
        }
        for(int i = 0; i < len; i++) {
            for(int j = 0; j < len; j++) {
                freq[grid[i][j]]++;
            }
        }
        for(int i = 1; i <= total; i++) {
            if(freq[i] == 2) {
                res[0] = i;  
            } else if(freq[i] == 0) {
                res[1] = i; 
            }
        }
        return res;
    }
};