class Solution:
    def getPermutation(self, n: int, k: int) -> str:
        res = "";
        f=1;
        arr=[]
        for i in range(1,n):
            f*=i
            arr.append(i)
        arr.append(n)
        k-=1
        while len(arr)>0:
            res+=str(arr[int(k/f)])
            del arr[int(k/f)]
            k%=f
            if len(arr)!=0:
                f=int(f/len(arr))
        return res
