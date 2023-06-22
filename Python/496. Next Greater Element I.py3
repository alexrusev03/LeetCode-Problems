class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        res=[]
        for i in range(len(nums1)):
            f = -1
            pos = self.p(nums2,nums1[i])
            for j in range(pos+1,len(nums2)):
                if nums2[j]>nums1[i]:
                    f=nums2[j]
                    break
            res.append(f)
        return res
    def p(self, nums2: List[int], k: int):
        n = len(nums2)
        for i in range(n):
            if nums2[i] == k:
                return i
        return -1
