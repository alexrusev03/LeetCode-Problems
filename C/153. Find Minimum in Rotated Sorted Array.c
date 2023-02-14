int findMin(int* nums, int numsSize){
    int sol=nums[0];
    int l=0;
    int r=numsSize-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(nums[mid]>=nums[l]){
            if(nums[l]<sol){
                sol=nums[l];
            }
            l=mid+1;
        }
        else{
            if(nums[mid]<sol){
                sol=nums[mid];
            }
            r=mid-1;
        }
    }
    return sol;
}
