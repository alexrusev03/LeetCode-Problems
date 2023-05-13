int compare( const void* a, const void* b){
     int int_a = * ( (int*) a );
     int int_b = * ( (int*) b );

     if( int_a == int_b ) return 0;
     else if( int_a < int_b ) return -1;
     else return 1;
}
int longestConsecutive(int* nums, int numsSize){
    if(numsSize == 0){
        return 0;
    }
    qsort(nums, numsSize, sizeof(int), compare );
    int curr = 1;
    int maxs = 0;
    for(int i=0; i<numsSize-1; i++){
        if(nums[i+1] != nums[i]){
            if(nums[i+1] == nums[i] + 1){
                curr++;
            }
            else{
                maxs = fmax(maxs, curr);
                curr = 1;
            }
        }
    }
    return fmax(maxs, curr);
}
