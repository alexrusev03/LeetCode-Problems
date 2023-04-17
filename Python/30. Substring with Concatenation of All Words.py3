class Solution:
    def findSubstring(self, s: str, words: List[str]) -> List[int]:
        d={}
        res=[]
        m=len(words)
        n=len(words[0])
        for i in range(m):
            d[words[i]]=d.get(words[i],0)+1
        for i in range(len(s)-m*n+1):
            dict={}
            check=1
            for j in range(m):
                t=s[i+j*n:i+(j+1)*n]
                if t in d:
                    dict[t]=dict.get(t,0)+1
                    if dict[t]>d[t]:
                        check=0
                        break
                else:
                    check=0
                    break
            if check==1:
                res.append(i)
        return res
