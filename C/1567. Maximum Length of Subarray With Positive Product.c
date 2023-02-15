int getMaxLen(int* nums, int numsSize){
    int res = 0;
    for(int i=0;i<numsSize;i++){
        int l = i;
        int countn = 0;
        while(l<numsSize && nums[l] == 0){
            l++;
        }
        int curr = l;
        int begn = INT_MIN;
        int endn = INT_MIN;
        while(curr<numsSize && nums[curr] != 0){
            if(nums[curr]<0){
                countn++;
                if(begn==INT_MIN){begn = curr;}
                endn=curr;
            }
            curr++;
        }
        if(countn%2 == 0){
            res = fmax(res, curr-l);
         }
        else{ 
            if(begn!=INT_MIN){
                res = fmax(res,curr-begn-1);
            }
            if(endn != INT_MIN){
                res = fmax(res,endn-l);
            }
         }
        i = curr;
    }
    return res;
}
