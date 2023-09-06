int maxAbsoluteSum(int* nums, int numsSize){
    int pos = INT_MIN;
    int curr = 0;
    for(int i = 0; i < numsSize; i++){
        curr += nums[i];
        if(curr > pos){
            pos = curr;
        }
        if(curr < 0){
            curr = 0;
        }
    }
    curr = 0;
    int neg = INT_MAX;
    for(int i = 0; i < numsSize; i++){
        curr += nums[i];
        if(neg > curr){
            neg = curr;
        }
        if(curr > 0){
            curr = 0;
        }
    }
    return fmax(abs(pos), abs(neg));
}
