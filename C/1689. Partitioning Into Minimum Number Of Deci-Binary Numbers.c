int minPartitions(char * n){
    int res = 0;
    for(int i = 0; i < strlen(n); i++){
        if(res < n[i]-'0'){
            res = n[i]-'0';
        }
    }
    return res;
}
