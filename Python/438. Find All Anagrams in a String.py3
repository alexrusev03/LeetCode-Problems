class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        np=len(p)
        ns=len(s)
        if np > ns:
            return {}
        freq = [0]*26;
        res = []
        w = [0]*26
        for i in range(0,np):
            freq[ord(p[i]) - ord('a')]+=1
            w[ord(s[i]) - ord('a')]+=1
        
        if freq == w:
            res.append(0)
        for i in range(np,ns):
            w[ord(s[i-np]) - ord('a')]-=1
            w[ord(s[i]) - ord('a')]+=1
            if(w == freq):
                res.append(i - np + 1)  
        
        return res
