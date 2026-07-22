class NumMatrix {
private:
    vector<vector<int>> p_matrix;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return;

        int ROWS = matrix.size();
        int COLS = matrix[0].size();

        p_matrix = vector<vector<int>>(ROWS + 1, vector<int>(COLS + 1, 0));

        for (int row = 1; row <= ROWS; row++) {
            for (int col = 1; col <= COLS; col++) {
                p_matrix[row][col] = 
                    matrix[row - 1][col - 1] 
                    + p_matrix[row][col - 1] 
                    + p_matrix[row - 1][col] 
                    - p_matrix[row - 1][col - 1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++; col1++; row2++; col2++;

        return p_matrix[row2][col2] 
                - p_matrix[row1 - 1][col2] 
                - p_matrix[row2][col1 - 1] 
                + p_matrix[row1 - 1][col1 - 1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */