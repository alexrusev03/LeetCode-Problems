class Solution:
    def climbStairs(self, n: int) -> int:
        prev=1
        prev2=1
        for i in range(2,n+1):
            cur=prev+prev2
            prev2=prev
            prev=cur
        
        return prev
# or

class Solution:
    def climbStairs(self, n: int) -> int:
        ways=[None]*(n+10)
        ways[0]=0
        ways[1]=1
        ways[2]=2
        ways[3]=3
        for i in range(4,n+1) :
            ways[i]=ways[i-1]+ways[i-2]
        
        return ways[n]
