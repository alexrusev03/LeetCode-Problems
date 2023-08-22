int compare(const void* a, const void* b) {
   return (*(int*)a - *(int*)b);
}
int maxIceCream(int* costs, int costsSize, int coins){
    int res = 0;
    qsort(costs, costsSize, sizeof(int), compare);
    for(int i = 0; i<costsSize; i++){
        if(costs[i]>coins){
            break;
        }
        coins -= costs[i];
        res++;
    }
    return res;
}
