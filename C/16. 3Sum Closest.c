int cmpfunc (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}
int threeSumClosest(int* nums, int numsSize, int target){
    qsort(nums, numsSize, sizeof(int), cmpfunc);
    int diff=INT_MAX;
    int res=0;
    for (int i = 0; i < numsSize-1; i++){
        int j=i+1;
        int n= numsSize-1;
        while(j<n){
            if (abs(nums[i] + nums[j] + nums[n] - target) < diff){
                diff=abs(nums[i] + nums[j] + nums[n] - target);
                res = nums[i] + nums[j] + nums[n];
            }
            if (nums[i]+nums[j]+nums[n]<target){
                j++;
            }
            else{
                n--;
            }
        }
        if(res==target){
            break;
        }
    }
    return res;
}
