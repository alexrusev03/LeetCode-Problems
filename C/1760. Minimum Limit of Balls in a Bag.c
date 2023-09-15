int minimumSize(int* nums, int numsSize, int maxOperations){
    int mx = 0;
    int mn = 1;
    int res = 0;
    for(int i = 0; i<numsSize; i++){
        mx = fmax(mx,nums[i]);
    }
    while(mn <= mx){
        int c = 0;
        int m = (mx+mn)/2;
        for(int i = 0; i<numsSize; i++){
            c += (nums[i]-1)/m;
        }
        if(c>maxOperations){
            mn = m+1;
        }
        else{
            res = m;
            mx = m-1;
        }
    }
    return res;
}
