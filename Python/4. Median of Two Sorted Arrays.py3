class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        n1=int(len(nums1))
        n2=int(len(nums2))
        for i in range(n1,n1+n2):
            nums1.append(nums2[i-n1])

        nums1.sort()
        if (n1+n2)%2==0:
            num1=int((n1+n2)/2-1)
            num2=int((n1+n2)/2)
            med1=(nums1[num1]+nums1[num2])/2
            return med1

        else:
            med2=int((n1+n2)/2)
            return nums1[med2]

        return 0
