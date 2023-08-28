int helper(char* s, char ch) {
    int c = 0;
    for(int i = 0; i < strlen(s); i += 2){
        if(s[i] != ch){
            c++;
        }
    }
    return c;
}
int minSwaps(char * s){
    int zeros = 0;
    int ones = 0;
    for(int i = 0; i<strlen(s); i++){
        if(s[i] == '0'){
            zeros++;
        }
        else{
            ones++;
        }
    }
    if(abs(zeros - ones) > 1){
        return -1;
    }
    if(zeros > ones){
        return helper(s, '0');
    }
    if(zeros < ones){
        return helper(s, '1');
    }
    return fmin(helper(s, '0'), helper(s, '1'));
}
