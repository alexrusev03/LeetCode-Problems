class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][9] = {0};
        int col[9][9] = {0};
        int subbox[9][9] = {0};
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    int num = board[i][j] - '1';
                    if(row[i][num]!=0 || col[j][num]!=0 || subbox[(i/3)*3+j/3][num]!=0){
                        return false;
                    }
                    row[i][num] = col[j][num] = subbox[(i/3)*3+j/3][num] = 1;
                }
            }
        }
        return true;
    }
};
