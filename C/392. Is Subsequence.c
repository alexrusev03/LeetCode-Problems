bool helper(char* s, char* t, int i, int j){
    if(i == 0){
        return true;
    }
    if(j == 0){
        return false;
    }
    if (s[i-1] == t[j-1]){
        return helper(s,t,i-1,j-1);
    }
    return helper(s,t,i,j-1);
}
bool isSubsequence(char * s, char * t){  
    if(helper(s,t,strlen(s),strlen(t))!=false){
        return true;
    }
    return false;
}
