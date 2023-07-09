class Solution:
    def fairCandySwap(self, aliceSizes: List[int], bobSizes: List[int]) -> List[int]:
        dict = {}
        res = [0,0]
        totalA=0
        totalB=0
        for i in bobSizes:
            totalB+=i
            dict[i]=1
        for j in aliceSizes:
            totalA+=j
        for k in aliceSizes:
            if int((totalB-totalA)/2)+k in dict:
                res[0]=k
                res[1]=(totalB-totalA)/2+k
                return res
        return res
