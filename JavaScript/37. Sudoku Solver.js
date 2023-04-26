/**
 * @param {character[][]} board
 * @return {void} Do not return anything, modify board in-place instead.
 */
var helper1 = function(board, r, c, ch){
    for(var i=0; i<9; i++){
        if(board[i][c] == ch){
            return false;
        }
        if(board[r][i] == ch){
            return false;
        }
        if(board[3*Math.floor(r/3)+Math.floor(i/3)][3*Math.floor(c/3)+i%3] == ch){
            return false;
        }
    }
    return true;
};
var solveSudoku = function(board) {
    for(var i=0; i<board.length; i++){
        for(var j=0; j<board[0].length; j++){
            if(board[i][j] == '.'){
                for(var k=1; k<=9; k++){
                    ch=k.toString();
                    if(helper1(board, i, j, ch)){
                        board[i][j] = ch;
                        if(solveSudoku(board)==true){
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
};
