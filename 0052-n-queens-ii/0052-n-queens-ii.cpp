class Solution {
public:
    bool isSafeToPutQueen(int row, int col, vector<string> mat){
         // row
        int n = mat.size();
        for(int i=0;i<n;i++){
            if(mat[i][col] == 'Q')return false;
        }
        // col
        for(int i=0;i<n;i++){
            if(mat[row][i] == 'Q')return false; 
        }

        // upper left diagonal
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(mat[i][j] == 'Q')return false;
        }
        // upper right diagonal
        for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
            if(mat[i][j] == 'Q')return false;
        }

        return true;
    }
    void findTotalSolutions(int n, int row, vector<string> mat,int &res){
        // base case
        if(row == n){
            res++;
            return;
        }
        // recursive case
        for(int col=0;col<n;col++){
            if(isSafeToPutQueen(row,col,mat)){
                mat[row][col] = 'Q';
                findTotalSolutions(n,row+1,mat,res);
                mat[row][col] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        int res = 0;
        vector<string> mat(n, string(n,'.'));
        int row = 0;
        findTotalSolutions(n,row,mat,res);
        return res;
    }
};