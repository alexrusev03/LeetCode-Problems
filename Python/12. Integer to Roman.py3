class Solution:
    def intToRoman(self, num: int) -> str:
        arr = [1000,900,500,400,100,90,50,40,10,9,5,4,1]
        str = ["M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"]
        r = ""
        for i in range(len(arr)):
            while num >= arr[i]:
                r += str[i]
                num -= arr[i]
        return r
