class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        arr = [""]*len(s)
        l = 0
        r = len(s) - 1
        while l <= r:
            if not(s[l].isalpha()):
                arr[l] = s[l]
                l+=1
            elif not(s[r].isalpha()):
                arr[r] = s[r]
                r-=1
            else:
                temp = s[l]
                arr[l] = s[r]
                arr[r] = temp
                l+=1
                r-=1
        return "".join(arr)
