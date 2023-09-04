class Solution:
    def countNicePairs(self, nums: List[int]) -> int:
        dict = {}
        res = 0
        for i in nums:
            if i - self.reverse(i) in dict:
                res = (res + dict[i - self.reverse(i)]) % 1000000007
                dict[i - self.reverse(i)] += 1
            else:
                dict[i - self.reverse(i)] = 1
        return res
    def reverse(self, i: int):
        rev=0
        while i!=0:
            rev=rev*10 + i%10
            i//=10
        return rev
