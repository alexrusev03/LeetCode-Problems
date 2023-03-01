class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        m = len(board)
        n = len(board[0])
        for i in range(m):
            for j in range(n):
                if self.helper(board,word,i,j,0,m,n)!=False:
                    return True

        return False
    
    def helper(self, board: List[List[str]], word:str, i:int, j:int, idx:int, m:int, n:int):
        if idx == len(word):
            return True
        if i >= m or j >= n or i < 0 or j < 0 or board[i][j] != word[idx]:
            return False
        temp = board[i][j]
        board[i][j] = '_'
        x1 = self.helper(board,word,i+1,j,idx+1,m,n)
        x2 = self.helper(board,word,i-1,j,idx+1,m,n)
        x3 = self.helper(board,word,i,j+1,idx+1,m,n)
        x4 = self.helper(board,word,i,j-1,idx+1,m,n)
        board[i][j] = temp
        return x1 or x2 or x3 or x4
