class Solution:
    def sequentialDigits(self, low: int, high: int) -> List[int]:
        res=[]
        for i in range(1,10):
            self.helper(res, low, high, i, 0)
        res.sort()
        return res
    def helper(self, res: List[int], low: int, high: int, i: int, num: int):
        if num>=low and num<=high:
            res.append(num)
        if num>high or i>9:
            return
        self.helper(res, low, high, i+1, num*10 + i)
