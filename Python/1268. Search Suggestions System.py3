class Solution:
    def suggestedProducts(self, products: List[str], searchWord: str) -> List[List[str]]:
        res=[]
        l = 0
        r = len(products) - 1
        products.sort()
        for i in range(len(searchWord)):
            temp=[]
            while l <= r and (len(products[l]) == i or products[l][i] < searchWord[i]):
                l+=1
            while l <= r and (len(products[r]) == i or products[r][i] > searchWord[i]):
                r-=1
            for j in range(3):
                if l + j <= r:
                    temp.append(products[l+j])
            res.append(temp)
        return res
