int minimumDeletions(int* nums, int numsSize){
    int maxidx = 0;
    int minidx = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] > nums[maxidx]){
            maxidx = i;
        }
        if(nums[i] < nums[minidx]){
            minidx = i;
        }
    }
    int fr  = fmax(maxidx,minidx) + 1;
    int bc = numsSize - fmin(minidx,maxidx);
    int both = fmin(minidx,maxidx) + 1 + (numsSize - fmax(minidx,maxidx));
    return fmin(fr,fmin(bc,both));
}
