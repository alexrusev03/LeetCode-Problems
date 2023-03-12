int maxPoints(int** points, int pointsSize, int* pointsColSize){
    if(pointsSize <= 2){
        return pointsSize;
    }
    int res= 0;
    for(int i = 0; i < pointsSize; i++){
        for(int j = i+1; j < pointsSize; j++){ 
            int x1 = points[i][0];
            int x2 = points[j][0];
            int y1 = points[i][1];
            int y2 = points[j][1];
            int num = 2;
            for(int k = 0; k < pointsSize && k!=i && k!=j; k++){
                int x3 = points[k][0];
                int y3 = points[k][1];
                if((y2-y1)*(x3-x1)==(x2-x1)*(y3-y1)){
                    num++;
                }
            }
            res = fmax(res , num);
        }
    }
    return res;
}
