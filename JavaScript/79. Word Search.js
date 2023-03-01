/**
 * @param {character[][]} board
 * @param {string} word
 * @return {boolean}
 */
var exist = function(board, word) {
    m = board.length;
    n = board[0].length;
    for(var i=0;i<m;i++){
        for(var j=0;j<n;j++){
            if(helper(board,word,i,j,0)!=false){return true;} 
        }
    }
    return false;
};
var helper = function(board,word,i,j,idx){
    if(idx == word.length){return true;}
    if(i >= m || j >= n || i < 0 || j < 0 || board[i][j] != word[idx]) {return false;}
    var temp = board[i][j];
    board[i][j] = '_';
    var x =
    helper(board,word,i+1,j,idx+1) ||
    helper(board,word,i-1,j,idx+1) ||
    helper(board,word,i,j+1,idx+1) ||
    helper(board,word,i,j-1,idx+1);
    board[i][j] = temp;
    return x;
};
