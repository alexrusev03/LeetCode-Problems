int comp(const void* a, const void* b){
   int int_a = * ( (int*) a );
   int int_b = * ( (int*) b );
   return (int_a > int_b) - (int_a < int_b);
}
int maxCoins(int* piles, int pilesSize){
    qsort(piles, pilesSize, sizeof(int), comp);
    int res=0;
    for(int i = pilesSize/3; i<pilesSize; i+=2){
        res += piles[i];
    }
    return res;
}
