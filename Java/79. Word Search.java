class Solution {
    int m;
    int n;
    public boolean exist(char[][] board, String word) {
        m = board.length;
        n = board[0].length;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(helper(board,word,i,j,0)!=false){return true;} 
            }
        }
        return false;
    }
    public boolean helper(char[][] board, String word, int i, int j, int idx){
        if(idx == word.length()){return true;}
        if(i >= m || j >= n || i < 0 || j < 0 || board[i][j] != word.charAt(idx)) {return false;}
        char temp = board[i][j];
        board[i][j] = '_';
        boolean x =
        helper(board,word,i+1,j,idx+1) ||
        helper(board,word,i-1,j,idx+1) ||
        helper(board,word,i,j+1,idx+1) ||
        helper(board,word,i,j-1,idx+1);
        board[i][j] = temp;
        return x;
    }
}
