int maxVowels(char * s, int k){
    int i = 0;
    int res = 0;
    for(int j = 0; j < strlen(s); j++){
        if(j<k-1){
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                i++;
            }
        }
        else{
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                i++;
            }
            res = fmax(res,i);
            if(s[j-k+1]=='a'||s[j-k+1]=='e'||s[j-k+1]=='i'||s[j-k+1]=='o'||s[j-k+1]=='u'){
                i--;
            }
        }
    }
    return res;
}
