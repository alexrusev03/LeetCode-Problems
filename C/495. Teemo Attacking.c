int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration){
    int res = 0;
    for (int i = 0; i < timeSeriesSize; i++){
        if(i < timeSeriesSize - 1){
            if (timeSeries[i] + duration - 1 < timeSeries[i+1]){
                res += duration; 
            }
            else{res += timeSeries[i+1] - timeSeries[i];}
        }
        else{res += duration;}
    }
    return res;
}
