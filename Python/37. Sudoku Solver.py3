class Solution:
    def solveSudoku(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        for i in range(len(board)):
            for j in range(len(board[0])):
                if board[i][j] == '.':
                    for ch in {'1','2','3','4','5','6','7','8','9'}:
                        if self.helper1(board, i, j, ch):
                            board[i][j] = ch
                            if self.solveSudoku(board)==True:
                                return True
                            board[i][j] = '.'
                    return False
        return True

    def helper1(self, board: List[List[str]], r: int, c: int, ch: int) -> None:
        for i in range(9):
            if board[i][c] == ch:
                return False
            if board[r][i] == ch:
                return False
            if board[3*int(r/3)+int(i/3)][3*int(c/3)+i%3] == ch:
                return False
        return True
