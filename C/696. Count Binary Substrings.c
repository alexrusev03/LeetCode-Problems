int countBinarySubstrings(char * s){
    int res=0;
    int temp=0;
    int c=1;
    for(int i = 0; i<strlen(s)-1; i++){
        if(s[i]==s[i+1]){
            c++;
        }
        else{
            res+=fmin(temp,c);
            temp=c;
            c=1;
        }
    }
    res+=fmin(temp,c);
    return res;
}
