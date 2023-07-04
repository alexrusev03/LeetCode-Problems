int maxCount(int m, int n, int** ops, int opsSize, int* opsColSize){
    int r = m;
    int c = n;
    for(int i = 0; i<opsSize; i++){
        if(ops[i][0] < r){
            r = ops[i][0];
        }
        if(ops[i][1] < c){
            c = ops[i][1];
        } 
    }
    return r*c;
}
