int maxSubarraySumCircular(int* nums, int numsSize){
    int sum=0;
    int currMax=0;
    int currMin=0;
    int maxs=INT_MIN;
    int mins=INT_MAX;   
    for(int i = 0; i<numsSize; i++){
        sum+=nums[i];
        currMax+=nums[i];
        currMin+=nums[i];
        maxs=fmax(maxs, currMax);
        if(currMax<0) {currMax=0;}
        mins=fmin(mins, currMin);
        if(currMin>0) {currMin=0;}
    }
    if(sum==mins){
        return maxs;
    }
    return fmax(maxs,sum-mins);
}
