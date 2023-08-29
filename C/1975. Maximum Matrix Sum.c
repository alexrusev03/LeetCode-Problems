long long maxMatrixSum(int** matrix, int matrixSize, int* matrixColSize){
    int count=0;
    int min=INT_MAX;
    long long res=0;
    for(int i=0; i<matrixSize; i++){
        for(int j=0; j<*matrixColSize; j++){
            if(matrix[i][j]<0){
                count+=1;
            }
            res+=abs(matrix[i][j]);
            if(abs(matrix[i][j])<min){
                min=abs(matrix[i][j]);
            }
        }
    }
    if(count%2==1){
        return res-(2*min);
    }
    else{
        return res;
    }
}
