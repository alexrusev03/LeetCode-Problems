class Solution:
    def checkPowersOfThree(self, n: int) -> bool:
        max = int(log(n)/log(3))
        res = 0
        for i in range(max, -1, -1):
            if res + pow(3,i) > n:
                continue
            res += pow(3,i)
            if res==n:
                return True
            if res+pow(3,i)<n:
                break
        return False
