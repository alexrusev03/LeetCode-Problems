int binaryGap(int n){
    int res = 0;
    int l = -1;
    for(int i = 0; i<32; i++){
        if(n&1){
            if(l != -1){
                res = fmax(res, i - l);
            }
            l = i;
        }
        n=n>>1;
    }
    return res;
}
