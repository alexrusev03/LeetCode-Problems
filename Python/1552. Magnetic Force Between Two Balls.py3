class Solution:
    def maxDistance(self, position: List[int], m: int) -> int:
        position.sort()
        l = 1
        r = position[-1] - position[0]
        mid = 0
        while l<=r:
            mid = int((l+r)/2)
            if self.helper(position,m,mid)==True:
                l = mid+1
            else:
                r = mid-1
        return r
    def helper(self, position: List[int], m: int, d: int):
        last = position[0];
        m-=1
        for i in range(len(position)):
            if position[i]-last >= d:
                m-=1
                last = position[i]
            if m==0:
                return True
        return False
