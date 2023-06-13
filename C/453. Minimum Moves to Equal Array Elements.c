int minMoves(int* nums, int numsSize){
    int res = 0;
	int m = INT_MAX;
	for(int i = 0; i<numsSize; i++){
        m = fmin(m,nums[i]);
    }
	for(int i = 0; i<numsSize; i++){
        res+=nums[i]-m;
    }
	return res;
}
