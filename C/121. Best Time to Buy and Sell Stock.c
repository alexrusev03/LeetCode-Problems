int maxProfit(int* prices, int pricesSize){
    int minPrice=prices[0];
    int profit=0;
    for (int i = 0; i<pricesSize;i++){
        minPrice=fmin(minPrice,prices[i]);
        profit=fmax(profit,prices[i]-minPrice);
    }
    return profit;
}
