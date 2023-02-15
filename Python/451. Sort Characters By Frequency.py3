class Solution:
    def frequencySort(self, s: str) -> str:
        dict = Counter(s)
        ans = ""
        for i in sorted(dict.items(), key = lambda x:x[1], reverse = True):
            ans += i[0] * i[1]

        return ans
