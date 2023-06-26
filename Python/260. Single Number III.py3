class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        dict = {}
        res = []
        for i in nums:
            if i in dict:
                dict[i]+=1
            else:
                dict[i] = 1
        for i in nums:
            if dict[i]==1:
                res.append(i)
        return res
