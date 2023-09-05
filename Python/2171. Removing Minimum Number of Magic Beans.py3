class Solution:
    def minimumRemoval(self, beans: List[int]) -> int:
        n = len(beans)
        res = sys.maxsize
        sum = 0
        beans.sort()
        for i in beans:
            sum += i
        for i in range(n):
            res = min(res, sum - (n - i) * beans[i])
        return res
