class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        row = [[0]*10 for i in range(10)]
        col = [[0]*10 for i in range(10)]
        subbox = [[0]*10 for i in range(10)]
        for i in range(9):
            for j in range(9):
                if board[i][j] != '.':
                    num = int(board[i][j])
                    if row[i][num]!=0 or col[j][num]!=0 or subbox[(int(i/3))*3+int(j/3)][num]!=0:
                        return False
                    row[i][num] = col[j][num] = subbox[(int(i/3))*3+int(j/3)][num] = 1
        return True
