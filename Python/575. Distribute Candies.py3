class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        n = len(candyType)
        dict = {}
        res = 0
        for i in candyType:
            if i not in dict:
                if  res == int(n/2):
                    return int(n/2)
                res+=1
            dict[i]=1
        return res
