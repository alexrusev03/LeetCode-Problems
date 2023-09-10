class Solution:
    def lexicalOrder(self, n: int) -> List[int]:
        res = []
        curr = 1
        for i in range(n):
            res.append(curr)
            curr*=10
            while curr>n:
                curr = int(curr/10)
                curr+=1
                while curr%10==0:
                    curr = int(curr/10)
        return res
