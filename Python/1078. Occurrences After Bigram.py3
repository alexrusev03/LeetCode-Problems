class Solution:
    def findOcurrences(self, text: str, first: str, second: str) -> List[str]:
        res = []
        arr = []
        word = ""
        for i in range(len(text)):
            if text[i]!=' ':
                word+=text[i]
            else:
                arr.append(word)
                word=""
        arr.append(word)
        for i in range(len(arr)):
            if i+2 < len(arr):
                if arr[i]==first and arr[i+1]==second:
                    res.append(arr[i+2])
        return res
