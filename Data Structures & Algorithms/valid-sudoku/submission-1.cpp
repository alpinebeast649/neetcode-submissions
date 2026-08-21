class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        return rowChecker(board) && colChecker(board) &&            boxChecker(board);
    }
    
    bool rowChecker(vector<vector<char>>&board) {
        for(int row = 0; row < 9; row++){
            unordered_set<char> numSet;
            for(int col = 0; col < 9; col++){
                char cell = board[row][col];
                if(cell == '.') {
                    continue;
                }
                if(numSet.count(cell)){
                    return false;
                }
                numSet.insert(cell);
            }
        }
        return true;
    }

    bool colChecker(vector<vector<char>>&board) {
        for(int col = 0; col < 9; col++) {
            unordered_set<char>numSet;
            for(int row = 0; row < 9; row++) {
                char cell = board[row][col];
                if(cell == '.') {
                    continue;
                }
                if(numSet.count(cell)) {
                    return false;
                }
                numSet.insert(cell);
            }
        }
        return true;
    }

    bool boxChecker(vector<vector<char>>&board) {
        for(int boxRow = 0; boxRow <= 6; boxRow += 3) {
        for(int boxCol = 0; boxCol <= 6; boxCol += 3) {
            unordered_set<char> numSet;
            for(int row = boxRow; row < boxRow + 3; row++) {
                for(int col = boxCol; col < boxCol + 3; col++) {
                        char cell = board[row][col];
                        if(cell == '.') {
                            continue;
                        }
                        if(numSet.count(cell)){
                            return false;
                        }
                        numSet.insert(cell);
                    }
                }
            }
        }
        return true;
    }
};
