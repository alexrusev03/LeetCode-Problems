class Solution:
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:
        res = []
        temp = []
        self.combination(res, temp, k, 1, n)
        return res
    def combination(self, res: List[List[int]], temp: List[int], k: int, b: int, n: int):
	    if len(temp) == k and n == 0:
	    	res.append(temp.copy())
	    for i in range(b,10):
		    temp.append(i)
		    self.combination(res, temp, k, i+1, n-i)
		    temp.pop()
