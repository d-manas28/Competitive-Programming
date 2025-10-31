class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        if(mat[rows-1][cols-1] == 1)return 0;
        if(rows == cols && rows == 1){
            if(mat[0][0] == 0)return 1;
            else return 0;
        }
        // preprocessing
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mat[i][j] == 1)
                    mat[i][j] = INT_MIN;
            }
        }
        mat[rows-1][cols-1] = 1;
        for (int i = rows-2; i >= 0; i--) {
            if (mat[i][cols - 1] != INT_MIN && mat[i+1][cols-1] != INT_MIN && mat[i+1][cols-1] != 0) {
                mat[i][cols - 1] = 1;
            }
        }
        for (int i = cols-2; i >= 0; i--) {
            if (mat[rows - 1][i] != INT_MIN && mat[rows - 1][i+1] != INT_MIN && mat[rows-1][i+1] != 0) {
                mat[rows - 1][i] = 1;
            }
        }
        for (int i = rows - 2; i >= 0; i--) {
            for (int j = cols - 2; j >= 0; j--) {
                if (mat[i][j] != INT_MIN) {
                    int downValue =
                        mat[i + 1][j] == INT_MIN ? 0 : mat[i + 1][j];
                    int rightValue =
                        mat[i][j + 1] == INT_MIN ? 0 : mat[i][j + 1];
                    mat[i][j] = (long)downValue + (long)rightValue;
                }
            }
        }
        return mat[0][0] == INT_MIN?0:mat[0][0];
    }
};