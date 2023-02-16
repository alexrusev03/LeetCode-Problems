int maxScoreSightseeingPair(int* values, int valuesSize){
    int j= values[0];
    int res= 0;
    for(int i=1;i<valuesSize;i++){
        res=fmax(res, j+values[i]-i);
        j=fmax(j, values[i]+i);
    }
    return res;
}
