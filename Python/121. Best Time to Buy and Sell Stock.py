class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        i = 0
        profit = 0
        minPrice=float('inf')
        for i in prices:
            minPrice=min(minPrice,i)
            profit=max(profit,i-minPrice)
        return profit
