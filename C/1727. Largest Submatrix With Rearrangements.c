int comp( const void* a, const void* b){
   int int_a = * ((int*) a);
   int int_b = * ((int*) b);
   return (int_a > int_b) - (int_a < int_b);
}
int largestSubmatrix(int** matrix, int matrixSize, int* matrixColSize){
    int res = 0;
    for(int i = 1; i < matrixSize; i++){
        for(int j = 0; j < *matrixColSize; j++){
            if(matrix[i][j] != 0){
                matrix[i][j] = matrix[i-1][j] + 1;
            }
        }
    }
    for(int i = 0; i < matrixSize; i++){
        qsort(matrix[i], *matrixColSize, sizeof(int), comp);
        for(int j = 0; j < *matrixColSize; j++){
            res = fmax(res, matrix[i][j] * (*matrixColSize - j));
        }
    }
    return res;
}
