class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        dict = {}
        for i in nums:
            if i not in dict:
                dict[i] = 1
            else:
                dict[i]+=1
            if dict[i]>1:
                return i
        return 0
