class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;

        if(numRows == 0) {
            return result;
        }

        result.push_back({1});

        for(int row = 1; row < numRows; row++) {
            vector<int> newRow(row + 1, 1);

            for(int col = 1; col < row; col++) {
                newRow[col] = result[row-1][col-1] +
                result[row-1][col];
            }
            result.push_back(newRow);
        }

        return result;
    }
};