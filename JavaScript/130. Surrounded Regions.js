/**
 * @param {character[][]} board
 * @return {void} Do not return anything, modify board in-place instead.
 */
var solve = function(board) {
    var m=board.length;
    var n=board[0].length;
    var v=new Array(m).fill(0).map(item=>new Array(n).fill(0))
    for(var i=0;i<n;i++){
        if(v[0][i]==0 && board[0][i]=='O'){
            helper(0,i,board,v,m,n);
        }
        if(v[m-1][i]==0 && board[m-1][i]=='O'){
            helper(m-1,i,board,v,m,n);
        }
    }
    for(var i=0;i<m;i++){
        if(v[i][n-1]==0 && board[i][n-1]=='O'){
            helper(i,n-1,board,v,m,n);
        }
        if(v[i][0]==0 && board[i][0]=='O'){
            helper(i,0,board,v,m,n);
        }
    }
    for(var i=0;i<m;i++){
        for(var j=0;j<n;j++){
            if(v[i][j]==0 && board[i][j] == 'O' ){
                board[i][j]='X';
            }
        }
    }
};
var helper = function(i,j,board,v,m,n){
    var drow=[-1,0,1,0];
    var dcol=[0,1,0,-1];
    v[i][j]=1;
    for(var k=0;k<4;k++){
        var nrow=i+drow[k];
        var ncol=j+dcol[k];
        if(nrow>=0 && ncol>=0 && ncol<n && nrow<m && v[nrow][ncol]!=1 && board[nrow][ncol]=='O'){
            helper(nrow,ncol,board,v,m,n);
        }
    }
};
