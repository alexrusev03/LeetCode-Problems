int maxProfit(int* prices, int pricesSize){
    int m=0;
    for(int i=0;i<pricesSize-1;i++){
        if(prices[i]<prices[i+1])
            m+=(prices[i+1]-prices[i]);
    }
    return m;
}
