class Solution:
    def canReach(self, arr: List[int], start: int) -> bool:
        check=[0]*len(arr)
        return self.helper(start, len(arr), arr, check)
    def helper(self, idx: int, n: int, arr: int, check: int):
        check[idx] = 1
        if arr[idx]==0:
            return True
        if idx + arr[idx] < n and check[idx + arr[idx]]==0:
            if self.helper(idx + arr[idx], n, arr, check)==True:
                return True
        if idx - arr[idx] >= 0 and check[idx - arr[idx]]==0:
            if self.helper(idx - arr[idx], n, arr, check)==True:
                return True
        return False
