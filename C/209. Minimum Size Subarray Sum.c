int minSubArrayLen(int target, int* nums, int numsSize){
    int res = 0;
    int i=0;
    int j=0;
    int m = INT_MAX;
    while(j < numsSize){
        while(res<target && j<numsSize){
            res += nums[j++];
        }
        if(res<target){break;}
        while(res>=target && i < j){
            res -= nums[i++];
        }
        m = fmin(m , j-i+1);     
    }
    return (m==INT_MAX) ? 0 :m;
}
