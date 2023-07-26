int longestSubarray(int* nums, int numsSize){
    int i = 0;
    int j = 0;
    int count = 0;
    int res = 0;
    while(j<numsSize){
        if(nums[j] == 0){
            count++;
        }
        while(count > 1){
            if(nums[i] == 0){
                count--;
            }
            i++;
        }
        res = fmax(res, j - i);
        j++;
    }
    return res;
}
