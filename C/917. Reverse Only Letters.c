char * reverseOnlyLetters(char * s){
    char* l = s;
    char* r = s + strlen(s) - 1;
    char temp;
    while(l <= r){
        if(!isalpha(*l)){
            l++;
        }
        else if(!isalpha(*r)){
            r--;
        }
        else{
            temp = *l;
            *l = *r;
            *r = temp;
            l++;
            r--;
        }
    }
    return s;
}
