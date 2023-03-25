class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        while len(stones) >= 2:
            stones.sort(reverse = True)
            i = stones.pop(0)
            j = stones.pop(0)
            if i == j:
                continue
            else:
                stones.append(i-j)
        if stones:
            return stones[0]
        else:
            return 0
