double myPow(double x, int n){
    double res = 1;
    if(n == INT_MAX){
        return (x == 1) ? 1 : (x == -1) ? -1 : 0;
    }
    if(n == INT_MIN){
        return (x == 1 || x == -1) ? 1 : 0;
    }
    if(n>0){
        for(int i = 0; i<n; i++){
            res*=x;
        }
        return res;
    }
    if(n<0){
        for(int i = 0; i>n; i--){
            res/=x;
        }
        return res;
    }
    return res;
}
