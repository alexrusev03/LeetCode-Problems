class Solution {
    public double myPow(double x, int n) {
        double res = 1;
        if(n == Integer.MAX_VALUE){
            return (x == 1) ? 1 : (x == -1) ? -1 : 0;
        }
        if(n == Integer.MIN_VALUE){
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
}
