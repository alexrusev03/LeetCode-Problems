int search(int* nums, int numsSize, int target){
    int n = numsSize;
    int l = 0;
    int r = n-1;
    while(l<=r){
       int m = (l+r)/2;
       if(nums[m]==target){return m;}
       else if(nums[m]>=nums[l]){
           if(nums[m]>target && nums[l]<=target){r=m-1;}
           else{l=m+1;}
        }
        else{
            if(nums[m]<target && nums[r]>=target){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
    }
    return -1;
}
