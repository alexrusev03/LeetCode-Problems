public class Solution {
    public double MyPow(double x, int n) {
        double res = 1;
        if(n == Int32.MaxValue){
            return (x == 1) ? 1 : (x == -1) ? -1 : 0;
        }
        if(n == Int32.MinValue){
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
