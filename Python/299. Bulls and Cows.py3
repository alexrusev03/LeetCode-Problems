class Solution:
    def getHint(self, secret: str, guess: str) -> str:
        bulls=0
        all=0
        n = len(secret)
        dict = {}
        for i in range(n):
            if guess[i]==secret[i]:
                bulls+=1
            if guess[i] in dict:
                dict[guess[i]]+=1
            else:
                dict[guess[i]]=1
        for i in range(n):
            if secret[i] in dict:
                if dict[secret[i]]>0:
                    all+=1
                    dict[secret[i]]-=1
        return str(bulls)+'A'+str(all-bulls)+'B'
