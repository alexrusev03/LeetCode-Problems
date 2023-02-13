int maxSubArray(int* nums, int numsSize){
    int curMax = 0, maxTillNow = INT_MIN;
     for(int i = 0; i<numsSize; i++)
        curMax = fmax(nums[i], curMax + nums[i]),
        maxTillNow = fmax(maxTillNow, curMax);
    return maxTillNow;
}
