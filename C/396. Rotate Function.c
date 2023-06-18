int maxRotateFunction(int* nums, int numsSize){
    int res = INT_MIN;
    int sum = 0;
    int f = 0;
    for(int i=0;i<numsSize;i++){
        f += i*nums[i];
        sum += nums[i];
    }
    for(int i=1;i<=numsSize;i++){
        f = f + sum - numsSize*nums[numsSize-i];
        res = fmax(res, f);
    }
    return res;
}
