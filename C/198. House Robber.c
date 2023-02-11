int rob(int* nums, int numsSize){
    int n = numsSize;
    if(n==1){return nums[0];}
    else{
    int prev2 = nums[0];
    int prev = fmax(prev2,nums[1]);
    int result;
    for(int i = 2; i<n; i++){
        result = fmax(prev, prev2+nums[i]);
        prev2=prev;
        prev=result;
    }
    return prev;
    }
}
