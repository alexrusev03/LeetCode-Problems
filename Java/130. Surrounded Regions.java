class Solution {
    public void solve(char[][] board) {
        int m=board.length;
        int n=board[0].length;
        
        int[][] v = new int[m][n];
        for(int i=0;i<n;i++){
            if(v[0][i]==0 && board[0][i]=='O'){
                helper(0,i,board,v,m,n);
            }
            if(v[m-1][i]==0 && board[m-1][i]=='O'){
                helper(m-1,i,board,v,m,n);
            }
        }
        for(int i=0;i<m;i++){
            if(v[i][n-1]==0 && board[i][n-1]=='O'){
                helper(i,n-1,board,v,m,n);
            }
            if(v[i][0]==0 && board[i][0]=='O'){
                helper(i,0,board,v,m,n);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]==0 && board[i][j] == 'O' ){
                    board[i][j]='X';
                }
            }
        }
    }
    public void helper(int i,int j,char[][] board,int[][] v,int m,int n){
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        v[i][j]=1;
        for(int k=0;k<4;k++){
            int nrow=i+drow[k];
            int ncol=j+dcol[k];
            if(nrow>=0 && ncol>=0 && ncol<n && nrow<m && v[nrow][ncol]!=1 && board[nrow][ncol]=='O'){
                helper(nrow,ncol,board,v,m,n);
            }
        }
    }
}
