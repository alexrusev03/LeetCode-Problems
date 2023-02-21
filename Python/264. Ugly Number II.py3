class Solution:
    def nthUglyNumber(self, n: int) -> int:
        if n <= 0:
            return 0
        if n == 1:
            return 1
        a = 0
        b = 0
        c = 0
        seq=[0]*n
        seq[0] = 1
        for i in range(1,n):
            seq[i] = min(seq[a]*2, min(seq[b]*3,seq[c]*5))
            if seq[i] == seq[a]*2:
                a+=1 
            if seq[i] == seq[b]*3:
                b+=1
            if seq[i] == seq[c]*5:
                c+=1

        return seq[n-1]
