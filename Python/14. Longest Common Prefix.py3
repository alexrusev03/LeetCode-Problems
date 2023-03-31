class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort()
        n=len(strs)
        str1=strs[0]
        str2=strs[n-1]
        res=""
        for i in range(len(str1)):
            if str1[i]==str2[i]:
                res+=str1[i]
            else:
                break
        return res
