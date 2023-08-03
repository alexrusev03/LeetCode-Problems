class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        res=[]
        for c in words[0]:
            flag = 1
            for i in range(1,len(words)):
                if c in words[i]:
                    words[i] = words[i].replace(c, '', 1)
                else:
                    flag = 0
                    break
            if flag!=0:
                res.append(c)
        return res
