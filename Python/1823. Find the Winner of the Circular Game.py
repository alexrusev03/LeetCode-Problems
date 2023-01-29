class Solution:
    def sol(self, n: int, k: int) -> int:
        if n==1:
            return 0
        
        else:
            return (self.sol(n-1,k)+k)%n

    def findTheWinner(self, n: int, k: int) -> int:
        return self.sol(n,k)+1
