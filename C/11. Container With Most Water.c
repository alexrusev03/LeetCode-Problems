int maxArea(int* height, int heightSize){
    int S=0;
    int l=0;
    int r = heightSize-1;
    while(l<r){
        int h=fmin(height[l],height[r]);
        S=fmax(S,h*(r-l)); 
        if(height[l]<height[r]){
                l++;
        }
        else{
            r--;
        }
    }
    return S;
}
