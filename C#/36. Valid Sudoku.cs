public class Solution {
    public bool IsValidSudoku(char[][] board) {
        int[,] row = new int[9,9];
        int[,] col = new int[9,9];
        int[,] subbox = new int[9,9];
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    int num = board[i][j] - '1';
                    if(row[i,num]!=0 || col[j,num]!=0 || subbox[(i/3)*3+j/3,num]!=0){
                        return false;
                    }
                    row[i,num] = col[j,num] = subbox[(i/3)*3+j/3,num] = 1;
                }
            }
        }
        return true;
    }
}
