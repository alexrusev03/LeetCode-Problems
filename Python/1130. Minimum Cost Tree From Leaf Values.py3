class Solution:
    def mctFromLeafValues(self, arr: List[int]) -> int:
        res = 0
        stk = []
        stk.append(sys.maxsize)
        for i in arr:
            while stk[-1]<=i:
                m = stk.pop()
                res += m*min(stk[-1],i)
            stk.append(i)
        while len(stk)>2:
            res += stk.pop()*stk[-1]
        return res
