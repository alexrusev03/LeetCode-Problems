class Solution:
    def reverseWords(self, s: str) -> str:
        ans = ""
        w = ""
        i = 0
        while i < len(s):
            while i < len(s) and s[i] != ' ':
                w += s[i]
                i+=1
            if len(w) != 0:
                if len(ans) != 0:
                    ans = w + " " + ans
                else:
                    ans = w
                w = ""
            i+=1
        return ans;
