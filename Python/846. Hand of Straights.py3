class Solution:
    def isNStraightHand(self, hand: List[int], groupSize: int) -> bool:
        hand.sort()
        n = len(hand)
        for i in range(n):
            if hand[i] == -1:
                continue
            k = i
            for j in range(1,groupSize):
                while k < n and hand[i] + j != hand[k]:
                    k+=1
                if k == n:
                    return False
                hand[k] = -1
        return True
