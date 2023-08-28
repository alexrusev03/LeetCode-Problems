class Solution:
    def minSwaps(self, s: str) -> int:
        zeros = 0
        ones = 0
        for i in range(len(s)):
            if s[i] == '0':
                zeros+=1
            else:
                ones+=1
        if abs(zeros - ones) > 1:
            return -1
        if zeros > ones:
            return self.helper(s, '0')
        if zeros < ones:
            return self.helper(s, '1')
        return min(self.helper(s, '0'), self.helper(s, '1'))
    def helper(self, s: str, ch: chr):
        c = 0
        for i in range(0, len(s), 2):
            if s[i] != ch:
                c+=1
        return c
