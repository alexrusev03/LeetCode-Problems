class Solution:
    def findComplement(self, num: int) -> int:
        t = num
        p = 1
        while t!=0:
            t = t >> 1
            p = p << 1
        return (p-1)^num
