class Solution:
    def pathInZigZagTree(self, label: int) -> List[int]:
        res=[]
        res.append(label)
        for i in range(int(log2(label)),0,-1):
            label=2**(i-1)+2**(i)-int(label/2)-1
            res.append(label)
        return res[::-1]
