class Solution:
    def maxArea(self, height: List[int]) -> int:
        S=0
        l=0
        r = len(height)-1
        while l<r:
            h=min(height[l],height[r])
            S=max(S,h*(r-l)) 
            if height[l]<height[r]:
                l+=1
            
            else:
                r-=1
            
        return S
