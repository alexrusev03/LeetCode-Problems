int numSubarrayBoundedMax(int* nums, int numsSize, int left, int right){
    int res = 0;
    int l = -1;
    int r = -1;
    for (int i = 0; i < numsSize; i++) {
        if(nums[i] > right){
            l = i;
        }
        if(nums[i] >= left){
            r = i;
        }
        res += r-l;
    }
    return res;
}
