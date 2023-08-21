class Solution:
    def canConstruct(self, s: str, k: int) -> bool:
        if len(s)<k:
            return False
        dict = defaultdict(int)
        for i in range(len(s)):
            dict[s[i]]+=1
        res=0
        for i in dict.values():
            if i%2==1:
                res+=1
        return res<=k
