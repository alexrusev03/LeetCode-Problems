class Solution:
    def combinationSum2(self, candidates, target: int) -> List[List[int]]:
        temp = []
        candidates.sort()
        arr = []
        self.solve(0, candidates, temp, target, arr)
        res = []
        for i in range(len(arr)):
            res.append(arr[i])
        
        return res
    
    def solve(self, idx: int, candidates: List[int], temp: List[int], target: int, arr: List[List[int]]):
        if target == 0:
            arr.append(temp.copy())
            return
        
        if target<0:
            return
        for i in range(idx, len(candidates)):
            if i>idx and candidates[i] == candidates[i-1]:
                continue
            
            temp.append(candidates[i])
            self.solve(i+1, candidates, temp, target-candidates[i], arr)
            temp.pop()
