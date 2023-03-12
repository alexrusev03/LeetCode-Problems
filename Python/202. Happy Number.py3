class Solution:
    def isHappy(self, n: int) -> bool:
        if n==1 or n==7:
            return True
        
        if n == 2 or n == 3 or n == 4 or n == 5 or n == 6 or n == 8 or n == 9:
            return False
        
        num=0
        while n!=0:
            num+=(n%10)*(n%10)
            n=int(n/10)
        
        if self.isHappy(num)==True:
            return True
        
        return False
