int trap(int* height, int heightSize){
    int sol=0;
    int l[heightSize];
    int r[heightSize];
    l[0]=height[0];
    r[heightSize-1]=height[heightSize-1];
    for(int i=1; i<heightSize; i++){
        l[i]= fmax(l[i-1],height[i]);
    }
    for(int i= (heightSize-2); i>=0; i--){
        r[i]= fmax(r[i+1],height[i]);
    }
    for(int i=0; i<heightSize; i++){
        sol+= (fmin(l[i], r[i]))-height[i];
    }
    return sol;
}
