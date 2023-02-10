int minCostClimbingStairs(int* cost, int costSize){
    for(int i = 2; i<costSize;i++){
        cost[i]=cost[i]+fmin(cost[i-1],cost[i-2]);
    }
    return fmin(cost[costSize-1], cost[costSize-2]);
}
