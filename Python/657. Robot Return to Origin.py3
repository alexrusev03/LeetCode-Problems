class Solution:
    def judgeCircle(self, moves: str) -> bool:
        u=0
        d=0
        l=0
        r=0
        for i in moves:
            if i == 'U':
                u+=1
            elif i == 'D':
                d+=1
            elif i == 'L':
                l+=1
            elif i == 'R':
                r+=1
        if u==d and l==r:
            return True
        return False
