class Solution:
    def lastRemaining(self, n: int) -> int:
        l = True
        res = 1
        step = 1
        rem = n
        while rem > 1:
            if l or rem % 2 == 1:
                res += step
            step *= 2
            rem =  int(rem / 2)
            l = not l
        return res
