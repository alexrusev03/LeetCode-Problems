public class Solution {
    public int MaxProfit(int[] prices) {
        int minPrice=prices[0];
        int profit=0;
        for (int i = 0; i<prices.Length;i++){
            minPrice=Math.Min(minPrice,prices[i]);
            profit=Math.Max(profit,prices[i]-minPrice);
        }
        return profit;
    }
}
