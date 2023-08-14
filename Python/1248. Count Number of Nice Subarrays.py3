class Solution:
    def numberOfSubarrays(self, nums: List[int], k: int) -> int:
        odd=0
        j=0
        count=0
        res=0
        for i in range(len(nums)):
            if nums[i]%2==1:
                odd+=1
                count=0
            while odd==k:
                if nums[j]%2==1:
                    odd-=1
                j+=1
                count+=1
            res+=count
        return res
