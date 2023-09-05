int comp(const void* a, const void* b){
    int int_a = * ( (int*) a );
    int int_b = * ( (int*) b );
    return (int_a > int_b) - (int_a < int_b);
}
long long minimumRemoval(int* beans, int beansSize){
    long long res = LONG_MAX;
    long long sum = 0;
    qsort(beans, beansSize, sizeof(int), comp);
    for(int i = 0; i<beansSize; i++){
        sum += beans[i];
    }
    for(int i = 0; i<beansSize; i++){
        res = fmin(res, sum - (long)(beansSize - i) * beans[i]);
    }
    return res;
}
