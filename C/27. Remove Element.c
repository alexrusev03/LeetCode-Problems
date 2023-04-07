int removeElement(int* nums, int numsSize, int val){
    int r = 0;
    for (int i = 0; i < numsSize; i++){
        if (nums[i] == val){
            r++;
        }
        else{
            nums[i-r] = nums[i];
        }
    }
    return numsSize - r;
}
