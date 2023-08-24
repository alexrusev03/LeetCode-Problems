class Solution:
    def carPooling(self, trips: List[List[int]], capacity: int) -> bool:
        passengers = [0]*1001
        for i in trips:
            passengers[i[1]] += i[0]
            passengers[i[2]] -= i[0]
        for count in passengers:
            capacity -= count
            if capacity<0:
                return False
        return True
