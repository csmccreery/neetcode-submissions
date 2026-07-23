class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        for (int row = 0; row < board.size(); row++) {
            unordered_set<char> row_seen, col_seen;

            for (int col = 0; col < board[0].size(); col++) {
                if (board[row][col] != '.') {
                    if (row_seen.count(board[row][col])) {
                        return false;
                    }
                    
                    row_seen.insert(board[row][col]);
                }

                if (board[col][row] != '.') {
                    if (col_seen.count(board[col][row])) {
                        return false;
                    }
                    
                    col_seen.insert(board[col][row]);
                }
            }
        }

        for (int square = 0; square < 9; square++) {
            unordered_set<char> seen;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;

                    if (board[row][col] == '.')
                        continue;

                    if (seen.count(board[row][col]))
                        return false;

                    seen.insert(board[row][col]);
                }
            }
        }
        
        return true;
    }
};
