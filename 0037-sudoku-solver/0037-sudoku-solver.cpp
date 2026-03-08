class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col, char dig){
        // horizontal
        for(int col=0; col<9; col++){
            if(board[row][col] == dig){
                return false;
            }
        }
        //vertically
        for(int row = 0; row<9; row++){
            if(board[row][col] == dig){
                 return false;
            }
        }
        // grid
        int sr = (row/3)*3; //starting row of grid
        int sc = (col/3)*3; //starting col of grid

        for(int i = sr; i<=sr+2; i++){
            for(int j = sc; j<=sc+2; j++){
                if( board[i][j] == dig){
                    return false;
                }
            }
            
        }
        return true;
    }
    bool helper(vector<vector<char>>& board, int row, int col ){
        if(row == 9){ //base case
            return true;
        }
        int nextRow = row;
        int nextCol = col+1;
        if(nextCol == 9){
            nextRow = row+1;
            nextCol = 0;
        }
        if(board[row][col] != '.'){
           return helper(board, nextRow, nextCol);
        }

        for(char dig = '1'; dig <='9'; dig++){
           if(isSafe(board, row, col, dig)){
            board[row][col] = dig;
            if(helper(board, nextRow, nextCol)){
                return true;
            }
            board[row][col] = '.'; //backtrack
           }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(board,0,0);
    }
};