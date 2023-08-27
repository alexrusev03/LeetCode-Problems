class Solution:
    def minPartitions(self, n: str) -> int:
        res = 0
        for i in range(len(n)):
            if res < ord(n[i])-ord('0'):
                res = ord(n[i])-ord('0')
        return res
