class Solution:
    def isPossibleDivide(self, nums: List[int], k: int) -> bool:
        n = len(nums)
        if n%k != 0:
            return False
        dict=defaultdict(int)
        nums.sort()
        for i in range(n):
            dict[nums[i]]+=1
        for i in range(n):
            if dict[nums[i]] > 0:
                for j in range(nums[i] + 1,  nums[i] + k):
                    if dict.get(j, 0) == 0:
                        return False
                    dict[j]-=1
                dict[nums[i]]-=1
        return True
