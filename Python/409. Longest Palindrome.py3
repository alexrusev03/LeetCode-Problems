class Solution:
    def longestPalindrome(self, s: str) -> int:
        count = 0
        n = len(s)
        dict = {}
        for i in s:
            if i in dict:
                dict[i] += 1
            else:
                dict[i] = 1
            if dict[i] % 2 == 1:
                count += 1
            else:
                count -= 1
        if count > 1:
            return n - count + 1
        return n
