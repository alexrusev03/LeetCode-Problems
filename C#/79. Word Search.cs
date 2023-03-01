public class Solution {
    int m;
    int n;
    public bool Exist(char[][] board, string word) {
        m = board.Length;
        n = board[0].Length;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(helper(board,word,i,j,0)!=false){return true;} 
            }
        }
        return false;
    }
    public bool helper(char[][] board, string word, int i, int j, int idx){
        if(idx == word.Length){return true;}
        if(i >= m || j >= n || i < 0 || j < 0 || board[i][j] != word[idx]) {return false;}
        char temp = board[i][j];
        board[i][j] = '_';
        bool x =
        helper(board,word,i+1,j,idx+1) ||
        helper(board,word,i-1,j,idx+1) ||
        helper(board,word,i,j+1,idx+1) ||
        helper(board,word,i,j-1,idx+1);
        board[i][j] = temp;
        return x;
    }
}
