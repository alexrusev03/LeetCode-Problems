class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        dict={}
        for i in range(len(nums)):
            if nums[i] in dict:
                j = dict[nums[i]]
                if i-j<=k:
                    return True
            dict[nums[i]]=i
        return False
