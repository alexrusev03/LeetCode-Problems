bool judgeCircle(char * moves){
    int u=0, d=0, l=0, r=0;
    for(int i = 0; i<strlen(moves); i++){
        if(moves[i] == 'U'){
            u++;
        }
        else if(moves[i] == 'D'){
            d++;
        }
        else if(moves[i] == 'L'){
            l++;
        }
        else if(moves[i] == 'R'){
            r++;
        }
    }
    if(u==d && l==r){
        return true;
    }
    return false;
}
