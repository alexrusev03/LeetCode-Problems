class Solution:
    def maxCoins(self, piles: List[int]) -> int:
        n = len(piles)
        piles.sort()
        res=0
        for i in range(int(n/3), n, 2):
            res += piles[i]
        return res
