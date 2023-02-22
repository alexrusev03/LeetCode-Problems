class Solution:
    def solve(self, board: List[List[str]]) -> None:
        m=len(board)
        n=len(board[0])
        
        v=[[0 for x in range(n)] for x in range(m)]
        for i in range(n):
            if v[0][i]==0 and board[0][i]=='O':
                self.helper(0,i,board,v,m,n)
            if v[m-1][i]==0 and board[m-1][i]=='O':
                self.helper(m-1,i,board,v,m,n)
            
        for i in range(m):
            if v[i][n-1]==0 and board[i][n-1]=='O':
                self.helper(i,n-1,board,v,m,n)
            if v[i][0]==0 and board[i][0]=='O':
                self.helper(i,0,board,v,m,n)

        for i in range(m):
            for j in range(n):
                if v[i][j]==0 and board[i][j] == 'O':
                    board[i][j]='X'

    def helper(self, i: int,j: int,board: List[List[str]],v: List[List[int]],m: int,n: int):
        drow=[-1,0,1,0]
        dcol=[0,1,0,-1]
        v[i][j]=1
        for k in range(4):
            nrow=i+drow[k]
            ncol=j+dcol[k]
            if nrow>=0 and ncol>=0 and ncol<n and nrow<m and v[nrow][ncol]!=1 and board[nrow][ncol]=='O':
                self.helper(nrow,ncol,board,v,m,n)
