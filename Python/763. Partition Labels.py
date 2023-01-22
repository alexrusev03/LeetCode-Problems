class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        n = len(s)
        mp = {}
        for i in range(0,n):
            mp[s[i]]=i

        begin=0
        end=0
        vec=[]
    
        for i in range(0,n):
            end=max(end,mp[s[i]])
            if i==end:
                vec.append(end-begin+1)
                begin=i+1
    
        if begin<n:
            vec.append(n-begin) 
        return vec
