int wiggleMaxLength(int* nums, int numsSize){
    int n1 = 0;
    int n2 = 0;
    for(int i=1; i< numsSize; i++){
        if(nums[i] > nums[i-1]){n1 = n2+1;}
        else if(nums[i] < nums[i-1]){n2 = n1+1;}
    }
    return fmax(n1+1, n2+1);
}
