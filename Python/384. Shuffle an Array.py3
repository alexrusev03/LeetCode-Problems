class Solution:
    def __init__(self, nums: List[int]):
        self.arr = nums[:]

    def reset(self) -> List[int]:
        return self.arr

    def shuffle(self) -> List[int]:
        shuffle= self.arr[:]
        l = len(shuffle)
        for i in range(l):
            p = random.randrange(i, l)
            shuffle[i], shuffle[p] = shuffle[p], shuffle[i]
        return shuffle


# Your Solution object will be instantiated and called as such:
# obj = Solution(nums)
# param_1 = obj.reset()
# param_2 = obj.shuffle()
