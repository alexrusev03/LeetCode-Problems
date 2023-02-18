public class Solution {
    public int MaxProfit(int[] prices) {
        int m=0;
        for(int i=0;i<prices.Length-1;i++){
            if(prices[i]<prices[i+1])
                m+=(prices[i+1]-prices[i]);
        }
        return m;
    }
}
