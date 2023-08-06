int minOperations(int n){
    int res=0;
    for(int j=0; j<n/2; j++){
        res+=n-2*j-1;
    }
    return res;
}
