class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        n = len(nums)
        res=[]
        dict={}
        for i in nums:
            if i not in dict:
                dict[i] = 0
            dict[i]=dict[i]+1
            if dict[i]>int(n/3):
                res.append(i)
                dict[i]=-sys.maxsize
        return res
