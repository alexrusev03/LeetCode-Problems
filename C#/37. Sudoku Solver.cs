public class Solution {
    public bool SolveSudoku(char[][] board) {
        for(int i=0; i<board.Length; i++){
            for(int j=0; j<board[0].Length; j++){
                if(board[i][j] == '.'){
                    for(char ch='1'; ch<='9'; ch++){
                        if(helper1(board, i, j, ch)){
                            board[i][j] = ch;
                            if(SolveSudoku(board)==true){
                                return true;
                            }
                            board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    public bool helper1(char[][] board, int r, int c, char ch){
        for(int i=0; i<9; i++){
            if(board[i][c] == ch){
                return false;
            }
            if(board[r][i] == ch){
                return false;
            }
            if(board[3*(r/3)+i/3][3*(c/3)+i%3] == ch){
                return false;
            }
        }
        return true;
    }
}
