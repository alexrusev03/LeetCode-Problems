int maxAscendingSum(int* nums, int numsSize){
    int sum = nums[0];
    int res = nums[0];
    for(int i = 1; i < numsSize; i++){
        if(nums[i] > nums[i-1]){
            sum += nums[i];
        }
        else{
            res = fmax(res,sum);
            sum = nums[i];
        }
    }
    res = fmax(res,sum);
    return res;
}
