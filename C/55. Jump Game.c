bool canJump(int* nums, int numsSize){
    int end=0;
    int idx=0;
    for(int i=0;i<numsSize;i++){
        idx=fmax(idx,i+nums[i]);
        if(i==end){
            end=idx;
        }
    }
    if(end>=numsSize-1){return true;}
    return false;
}
