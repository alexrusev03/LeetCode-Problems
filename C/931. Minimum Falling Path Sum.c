int minFallingPathSum(int** matrix, int matrixSize, int* matrixColSize){
    int n = matrixSize;
    int l = 0;
    int r = 0;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j==0){
                l = INT_MAX;
                r=matrix[i-1][j+1];
            }
            else if(j==n-1){
                r = INT_MAX;
                l=matrix[i-1][j-1];
            }
            else{
                r=matrix[i-1][j+1];
                l=matrix[i-1][j-1];
            }
            matrix[i][j]=matrix[i][j]+fmin(matrix[i-1][j], fmin(l, r));
        }
    }
    int res = INT_MAX;
    for(int j=0;j<n; j++){
        res = fmin(res, matrix[n-1][j]);
    }
    return res;
}
